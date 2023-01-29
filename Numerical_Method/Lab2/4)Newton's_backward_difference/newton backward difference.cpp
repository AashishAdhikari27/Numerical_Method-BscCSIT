#include<stdio.h>
#include<conio.h>
long int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
	float a[100], b[100], x[100], xp, h, s;
	int n, i, j, k;
	printf("Enter the number of data:");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d]=", i);
		scanf("%f", &a[i]);
		printf("Enter the value of function b[%d]=", i);
		scanf("%f", &b[i]);
	}
	printf("Value of a\t\tValue of b\n");
	for(i=0; i<n; i++)
	{

		printf("%f\t\t%f\n", a[i], b[i]);
	}
	printf("Enter the value where you want to be evaluate:");
	scanf("%f", &xp);
	h=a[1]-a[0];
	s=(xp-a[n-1])/h;
	for(i=0; i<n; i++)
	{
		x[i]=b[i];
	}
	for(i=n-1; i>=1; i--)
	{
		for(j=0; j<=i-1; j++)
		{
			x[j]=x[j+1]-x[j];
		}
	}
	float v, p;
	v=x[n-1];

		for(i=1; i<=n-1; i++)
		{
			p=1.0;
			for(k=1; k<=i; k++)
			{
				p=p*(s+k-1);
			}
			v=v+((x[n-i-1]*p)/fact(i));		
	    }
    printf("The interpolated  value is %f", v);
	return 0;
}
