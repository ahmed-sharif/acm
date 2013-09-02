#include <stdio.h>

int main()
{
	char str[1000];
	int i, first = 1;
	while(scanf("%[^\n]s", str)!=EOF)
	{
		scanf("\n");
		/* printf("%d\n",strlen(str)); */
		printf("%s\n",str);
	}
	return 0;
}

