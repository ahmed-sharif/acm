#include <stdio.h>
#include <string.h> 

int main()
{
	int tc, k, cent,  lines, i;
	double total;
	unsigned char paid_c;
	unsigned char in;
	int values[300];
	unsigned char str[10050];
	float final_amount;
	scanf("%d", &tc);
	/* printf("test case = %d\n",tc); */
	while(tc--)
	{
		total = 0.0;
		memset(values, 0, sizeof(values));
		scanf("%d\n", &k);
		/* printf("k= %d\n", k); */
		while(k--)
		{
			scanf("%c %d\n", &paid_c, &cent);
			/* printf("%c %d\n", paid_c, cent); */
			values[paid_c] = cent;
		}
		scanf("%d\n", &lines);
		/* printf("lines = %d\n",lines); */
		while(lines)
		{
			scanf("%c", &in);
			if(in == '\n' || in == '\r')
				lines--;
			total += values[in];
			/* printf("%d %s\n",lines, str); */
		}
		/* printf("%d\n", total); */
		printf("%.2lf$\n",total/100.0);
	}	
	return 0;
}

