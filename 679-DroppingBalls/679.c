#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	int d, n, tc, minnode;
	int root;
	while(scanf("%d", &tc) != EOF)
	{
  		if(tc == -1)
			break;
  		while(tc--)
  		{
			scanf("%d %d\n", &d, &n);
			minnode = pow(2, d-1);
			if(n > minnode)
				n = n % minnode;
			root=1;
			while(root < minnode)
			{
				if((n % 2) == 0)
				{
					root = 2 * root + 1;
					n = n / 2;
				}
				else
				{
					root = 2 * root;
					n = n / 2 + 1;
				}
			}
			printf("%d\n", root);	
  		}
	}

	return 0;
}
