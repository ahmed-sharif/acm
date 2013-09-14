#include <stdio.h>
#include <string.h>
#include <math.h>


int dropball(int state[], int max)
{
	int start = 1;
	/* printf("\n"); */
	int i;
	/*for(i=1; i<=max; i++)
	{
		printf("%d ",state[i]);
	} */
	/* printf("\n"); */
	while(start <= max)
	{
		/* printf("%d ", start); */
		if(state[start])
		{
			state[start] = (state[start] ^ 1); 
			start = 2 * start + 1;
			if(start > max)
				return start / 2;
			
		}
		else
		{	
			state[start] = (state[start] ^ 1);
			start = 2 * start;
			if(start > max)
				return start / 2;
			
		}
	}
}
	
int state[1048676];


int main()
{
	int d, i, n, tc, maxnode, finalpos;

	while(scanf("%d", &tc) != EOF)
	{
  		if(tc == -1)
			break;
  		while(tc--)
  		{
			scanf("%d %d\n", &d, &n);
			maxnode = pow(2, d) - 1;
			memset(state, 0, (maxnode+1)*sizeof(int));
			for(i=0;i<n;i++)
			{
				finalpos = dropball(state, maxnode);
				/* printf("position of ball %d is %d\n", i+1,  finalpos);	 */
			}
			printf("%d\n", finalpos);	
  		}
	}

	return 0;
}
