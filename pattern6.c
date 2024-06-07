#include<stdio.h>
void main()
{
	int i,j,n,temp;
	printf ("Enter the value of n");
	scanf ("%d",&n);
		temp=1;
	for (i=1;i<=n;i++)
	{
	
		for (j=1;j<=i;j++)
		{
			printf ("%d",temp);
			temp++;
		}
		printf ("\n");
	}
}
