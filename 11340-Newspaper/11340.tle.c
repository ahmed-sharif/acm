#include <stdio.h>
#include <string.h> 

int main()
{
	int tc, k, cent,  lines, total, i;
	unsigned char paid_c;
	int values[300];
	char str[10050];
	float final_amount;
	scanf("%d", &tc);
	/* printf("test case = %d\n",tc); */
	while(tc--)
	{
		total = 0;
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
		while(lines--)
		{
			scanf("%[^\n]s", str);
			scanf("\n");
			/* printf("%d %s\n",lines, str); */
			for(i=0; i<strlen(str); i++)
			{
				total += values[str[i]];
			}
		}
		final_amount = total/100.0;
		/* printf("%d\n", total); */
		printf("%.2f$\n",final_amount);
	}	
	return 0;
}

