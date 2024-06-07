#include<stdio.h>
int add(int);
void main()
{
	int n,sum;
	printf ("Enter the value of n");
	scanf ("%s",&n);
	sum=add(n);
	printf ("answer=%d",sum);
}
int add(int m)
{
	int i,sum=0;
	for (i=0;i<=m;i++)
	{
		sum=sum+i;
	}
	return sum;
}

