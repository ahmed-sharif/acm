#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <stdio.h>

using namespace std;

map<int, int> Employees;

int getlength(int n)
{
	int length=1;
	int orgn=n;
	//printf("function call %d\n",n);
	while(n > 1)
	{
		//printf("n is now = %d\n",n);
		if(Employees.count(n)!=0)
		{
			//printf("this n=%d orgn=%d\n",n,orgn);
			if(orgn!=n)
			{
				Employees[orgn]=Employees[n]+length-1;
				return Employees[orgn];
			}
			return Employees[n];
		}
		
		if((n%2) == 0)
			n=n/2;
		else
			n=n*3 + 1;
		
		length++;
			
	}
	Employees[orgn]=length;
	return length;
}

int main()
{

	int low, high, maxlength,i,length;
	int orglow,orghigh,temp;
	
	while(scanf("%d %d",&low,&high)!=EOF)
	{
		orglow=low;
		orghigh=high;
		if(low > high)
		{
			temp=low;
			low=high;
			high=temp;
		}
		
		maxlength=0;
		for(i=low;i<=high;i++)
		{
			length=getlength(i);
			if(length > maxlength)
			{
				maxlength=length;
			}
			//printf("length %d=%d\n",i,length);
		}
		printf("%d %d %d\n",orglow,orghigh,maxlength);
	}
	

	return 0;	
}
