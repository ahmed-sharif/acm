#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strrevs(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}



int palindrom(char str[])
{
	int i, j;
	for(i=0, j=strlen(str)-1; i<(strlen(str)/2); i++, j--)
	{
		if(str[i] != str[j])
			return 0;
	}
	return 1;
}

int main()
{
	int test_cases, steps;
	long input, rev_input;
	char number_1[15], number_2[15], result[15];
	scanf("%d",&test_cases);
	while(test_cases > 0)
	{
		steps = 0;
		scanf("%ld",&input);
		while(1)
		{
			steps++;
			sprintf(number_1, "%ld", input);
			sprintf(number_2, "%s", strrevs(number_1));
			sscanf(number_2, "%ld", &rev_input);
			sprintf(result, "%ld", input + rev_input);
			if(palindrom(result))
			{
				printf("%d %s\n", steps, result);
				break;
			}
			input = input + rev_input;
		}
		test_cases--;
	}
	return 0;
}
