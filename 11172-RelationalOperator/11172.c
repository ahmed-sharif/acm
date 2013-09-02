#include <stdio.h>

int main()
{
    int test_case, first, second;
    
    scanf("%d",&test_case);
    while(test_case--)
	{
		scanf("%d %d",&first, &second);
		if(first > second)
			printf(">\n");
		else if(first < second)
			printf("<\n");
		else
			printf("=\n");
	}
    return 0;
}
