#include <stdio.h>

int main()
{
	int soldiers[100010];
	int s, b, i, start, end;
	while(scanf("%d %d", &s, &b) != EOF)
	{
		for(i=1; i<=s; i++)
			soldiers[i] = 1;
		if((s+b) == 0)
			break;
		while(b--)
		{
			scanf("%d %d", &start, &end);
			for(i=start; i<=end; i++)
				soldiers[i] = 0;
			for(i=start-1; i>0; i--)
			{
				if(soldiers[i] == 1)
				{
					printf("%d ", i);
					break;
				}
			}
			if(i == 0)
				printf("* ");
			for(i=end+1; i<=s; i++)
			{
				if(soldiers[i] == 1)
				{
					printf("%d\n", i);
					break;
				}
			}
			if(i > s)
				printf("*\n");
		}
		printf("-\n");
	}
	return 0;
}
