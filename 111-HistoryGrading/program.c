#include <stdio.h>
#include <string.h>
#include <math.h>


int lcs(int X[], int Y[], int n)
{
	int result[11][11];
	int i,j;
	for (i = 1; i <= n; i++)
	{
		result[i][0] = 0;
	}

	for (i = 0; i <= n; i++)
	{
		result[0][i] = 0;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (X[i] == Y[j])
			{
				result[i][j] = result[i-1][j-1] + 1;
			}
			else if(result[i-1][j] >= result[i][j-1])
			{
				result[i][j] = 	result[i-1][j];
			}
			else
			{
				result[i][j] = 	result[i][j-1];	
			}
		}
	}
	return result[n][n];

}

int main()
{
	int i, j, n, numbers[11], result[11][11];
  
  int X[11], Y[11];

	scanf("%d", &n);
	/* printf("%d\n", n); */
	for(i=1; i<=n; i++)
	{
		scanf("%d", &X[i]);
	}
	/*
	for (int i = 1; i <= n; ++i)
	{
			printf("%2d ", X[i]);
	}
	printf("\n");
	*/

	i=1;
	while(scanf("%d", &Y[i++]) != EOF)
	{
		for(j=i; j<=n; j++)
		{
			scanf("%d", &Y[j]);
		}
		printf("%d\n", lcs(X, Y, n));
		/*
		for (int i = 1; i <= n; ++i)
		{
			printf("%2d ", Y[i]);
		}
		printf("\n"); */
		i = 1;
	}

	return 0;
}
