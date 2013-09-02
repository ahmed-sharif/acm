#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	int i, first = 1;
	while(scanf("%[^\n]s", str)!=EOF)
	{
		scanf("\n");
		/* printf("%d\n",strlen(str)); */
		for(i=0; i<strlen(str); i++)
		{
			if(str[i] == '"')
			{
				if(first)
				{
					printf("``");
					first = 0;
				}
				else
				{
					printf("''");
					first = 1;
				}
			}
			else
			{
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

