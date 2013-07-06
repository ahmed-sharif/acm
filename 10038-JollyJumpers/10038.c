#include <stdio.h>
#include <math.h>

int sum(int n)
{
	return (n*(n+1))/2;
}

int compare_function(const void *a,const void *b) 
{
	int *x = (int *) a;
	int *y = (int *) b;
	return *x - *y;
}


int main()
{

	long n,i,required,previous,current,present;
	long diff[3000], difference,flag;
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
				difference=abs(current-previous);
				diff[i-1]=difference;
				present+=difference;
			}
			previous=current;
		}
		/* scanf("\n"); */
		flag=1;
		if(present==required)
		{
			qsort(diff,n-1,sizeof(long),compare_function);
			/*for(i=0;i<n-1;i++)
				printf("%ld ",diff[i]); */
			for(i=0;i<n-1;i++)
			{
				if(diff[i]!=(i+1))
				{
					flag=0;
					break;
				}
			}
			if(flag==1)	
				printf("Jolly\n");
			else
				printf("Not jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
	}
	return 0;
}
