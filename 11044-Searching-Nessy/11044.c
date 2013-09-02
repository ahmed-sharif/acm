#include <stdio.h>

int main()
{
    int test_case, row, col, total;
    
    scanf("%d",&test_case);
    while(test_case--)
	{
		total = 0;
		scanf("%d %d",&row, &col);
		/* total += ceil((row -2)/3.0) * ceil((col -2)/3.0); */
		/* total = (row /3) * (col/3); */
		printf("%d\n", ((row /3) * (col/3)));
	}
    return 0;
}
