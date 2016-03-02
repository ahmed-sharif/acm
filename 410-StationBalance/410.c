#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int compare_function(const void *a,const void *b) 
{
  int *x = (int *) a;
  int *y = (int *) b;
  return *y - *x;
}

int main()
{
	int chambers, specimen, i, j, count, k, set;
	int all_spec[1000], all_chambers[5][2];
	float sums[5], imbalance;
	int forward;
	int s;
	float avg;
	set = 0;
	while(scanf("%d %d",&chambers,&specimen)!=EOF)	
	{
		/* input */
		set++;
		s = 0;
    for(i=0; i<specimen; i++)
    {
    	scanf("%d",&all_spec[i]);
    	s += all_spec[i]; 
    }
    qsort(all_spec, specimen, sizeof(int), compare_function);
    avg = (float)s/chambers;
    
    forward = 1;
    for(i=0; i<chambers; i++)
    	sums[i] = 0.0-avg;
    

    count = 0;
    for(j=0; j<2; j++)
    {
    	if(forward == 1)
    	{
    		for(i=0; i<chambers; i++)
    		{
    			all_chambers[i][j] = all_spec[count];
    			sums[i] += all_spec[count];
    			/* printf("\n-----\n");
    			for(i=0; i<chambers; i++)
    				printf("%f ", sums[i]);
    			printf("\n-----\n"); */
    			count++;
    		}
    		forward = 0;
    	}
    	else
    	{
    		forward = 1;
    		for(k=i-1; k>=0; k--)
    		{
    			if (count >= specimen)
    			{
    				all_chambers[k][j] = -1;
    				break;
    			}
    			all_chambers[k][j] = all_spec[count];
    			sums[k] += all_spec[count];
    			
    			count++;
    		}
    	}
    }
    imbalance = 0.0;
    for(i=0; i<chambers; i++)
    {
    	
    	imbalance += fabs(sums[i]);
    }

    printf("Set #%d\n", set);
    for(i=0; i<chambers; i++)
    {
    	printf(" %d:", i);
    	for(j=0; j<2; j++)
    	{
    		if(all_chambers[i][j] != -1)
    			printf(" %d", all_chambers[i][j]);
    	}
    	printf("\n");
    }
    printf("IMBALANCE = %.5f\n\n", imbalance);

	}
	return 0;
}
