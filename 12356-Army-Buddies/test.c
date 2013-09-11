#include <stdio.h>
#include <string.h>

void printArr(char arr[])
{
	int i;
	for(i=0; i<10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	char arr[10];
	int start, end;
	memset(arr, 1, sizeof(arr));
	printArr(arr);
	start = 3;
	end = 6;
	memset(arr+start, 0, (end-start+1)*sizeof(char));
	printArr(arr);
	return 0;
}
