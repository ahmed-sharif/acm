#include <stdio.h>
#include <string.h>

int main()
{

	char number_1[15], number_2[15];
	int lnth_1, lnth_2;
	int i, j;
	int if_carry, total_carry;
	while(scanf("%s %s",number_1, number_2)!=EOF)
	{
		/* printf("%s %s\n", number_1, number_2); */
		if((strcmp(number_1, "0") == 0) && (strcmp(number_2, "0") == 0))
			break;
		lnth_1 = strlen(number_1);
		lnth_2 = strlen(number_2);
		if_carry = 0;
		total_carry = 0;
		for(i=lnth_1-1, j=lnth_2-1; i>=0 && j>=0; i--, j--)
		{
			if((number_1[i] - '0' + number_2[j] - '0' + if_carry) > 9)
			{
				if_carry = 1;
				total_carry++;
			}
			else
			{
				if_carry = 0;
			}
		}
		/* printf("outside i=%d j=%d\n", i, j);
		printf("\t%s %s\n", number_1, number_2); */
		
		if(i < 0 && j >= 0)
		{
			/*printf("first i=%d j=%d\n", i, j);
			printf("\t%s %s\n", number_1, number_2); */
			while(j >= 0)
			{
				if((number_2[j] - '0' + if_carry) > 9)
				{
					if_carry = 1;
					total_carry++;
				}
				else
				{
					if_carry = 0;
				}
				j--;
			}
		}
		if(i >=0 && j < 0)
		{
			/* printf("second i=%d j=%d\n", i, j);
			printf("\t%s %s\n", number_1, number_2); */
			while(i >= 0)
			{
				if((number_1[i] - '0' + if_carry) > 9)
				{
					if_carry = 1;
					total_carry++;
				}
				else
				{
					if_carry = 0;
				}
				i--;
			}
		}
		
		if(total_carry == 0)
		{
			printf("No carry operation.\n");
		}
		else if(total_carry == 1)
		{
			printf("1 carry operation.\n");
		}
		else
		{
			printf("%d carry operations.\n", total_carry);
		}		
		memset(number_1,'\0',sizeof(number_1));
		memset(number_2,'\0',sizeof(number_2));
	}
	return 0;
}
