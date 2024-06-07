#include<stdio.h>
int prime(int);

int main ()
{
	int n,d;
	printf ("Enter value");
	scanf ("%d",&n);
	d=prime(n);
	if (d==0)
	{
		printf ("not prime");
	}
	else
	{
		printf ("prime");
	}
}
int prime (int n)
{
	int i;
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

