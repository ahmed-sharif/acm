#include <stdio.h>
#include <math.h>

int sum(int n)
{
	return (n*(n+1))/2;
}

int main()
{

	long n,i,required,previous,current,present;
	while(scanf("%ld",&n)!=EOF)
	{
		previous=0;
		present=0;
		required = sum(n-1);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&current);
			if(i!=0)
			{
				present+=abs(current-previous);
			}
			previous=current;
		}
		/* scanf("\n"); */
		if(present==required)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
	}
	return 0;
}
