#include <stdio.h>


int getRotation(int current, int destination, int mode)
{
	int dis;
	if(mode == 1)	/* 1 for clockwise and 0 for anti clockwise*/
	{
		if(current<destination)
		{
			current+=40;
		}
		dis = (current - destination) * 9;
	}
	else
	{
		if(current > destination)
		{
			destination += 40;
		}
		dis = (destination - current) * 9;
	}
	return dis;
}

int main()
{
	int start, first, second, third, distance;
	while(1)
	{
		scanf("%d %d %d %d",&start, &first, &second, &third);
		if((start+first+second+third) == 0)
			break;
		distance = 720;
		distance += getRotation(start, first, 1);
		distance += 360;
		distance += getRotation(first, second, 0);
		distance += getRotation(second, third, 1);
		printf("%d\n", distance);
	}
	return 0;
}

