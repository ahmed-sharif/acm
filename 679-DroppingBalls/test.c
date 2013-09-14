#include <stdio.h>
#include <string.h>
#include <math.h>


int dropball(int state[], int max)
{
	int start = 1;
	printf("\n");
	int i;
	for(i=1; i<=max; i++)
	{
		printf("%d ",state[i]);
	}
	printf("\n");
	while(start <= max)
	{
		printf("%d ", start);
		if(state[start])
		{
			state[start] = (state[start] ^ 0); 
			start = 2* start + 1;
			if(start > max)
				return start / 2;
			
		}
		else
		{	
			state[start] = (state[start] ^ 0);
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
	int y = 1;
	int x = 0;
	x = x ^ 0;

	y = y ^ 0;

	return 0;
}
