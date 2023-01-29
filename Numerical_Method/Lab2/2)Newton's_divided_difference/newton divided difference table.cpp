#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x[100], f[100], a[100] ;
    int i, j, n;
	float v , xp, p;
	printf("Enter the number of observation:");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the value of x[%d]=", i);
		scanf("%f", &x[i]);
		printf("Enter the functional value of f[%d]=", i);
		scanf("%f", &f[i]);
	}
	printf("\n");
	printf("Value of x\t\tfunctional value\n");
	for(i=0; i<n; i++)
	{
		printf("%f\t\t", x[i]);
		printf("%f\n", f[i]);
	}
	for(i=0; i<=n-1; i++)
	{
		a[i]=f[i];
	}
	printf("\nEnter the value where you want to evaluate=");
	scanf("%f", &xp);
	for(i=0; i<=n-1; i++)
	{
		for(j=n-1; j>=i+1; j--)
		{
		a[j]=(a[j]-a[j-1])/(x[j]-x[j-1-i]);	
		}
	}
	v=0.0;
	
	for(i=0; i<=n-1; i++)
	{
		p=1.0;
		for(j=0; j<=i-1; j++)
		{
			p=p*(xp-x[j]);
		}
		v=v+(a[i]*p);
	}
	
	printf("The interploating point is %f", v);
	return 0;
	
}
