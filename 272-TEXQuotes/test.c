#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	int i=1, first = 4;
	while(i++ <= first )
	{
	scanf("%[^\n]s", str);
	scanf("\n");
	
	printf("%s\n",str);
	}
	return 0;
}
