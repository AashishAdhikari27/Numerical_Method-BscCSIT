#include<stdio.h>
#include<conio.h>
int main()
{
	float x[100], y[100], sx, sy, sxy,sx2, b, a;
	int i, n;
	printf("Enter the number of observation:");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the value of x[%d]=", i);
		scanf("%f", &x[i]);
		printf("Enter the functional value of f[%d]=", i);
		scanf("%f", &y[i]);
	}
	printf("\n");
	printf("Value of x\t\tfunctional value\n");
	for(i=0; i<n; i++)
	{
		printf("%f\t\t", x[i]);
		printf("%f\n", y[i]);
	}
	for(i=0; i<=n-1; i++)
	{
		sx=sx+x[i];
		sy=sy+y[i];
		sxy=sxy+(x[i]*y[i]);
		sx2=sx2+(x[i]*x[i]);
	}
	b=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
	a=(sy/n)-((b*sx)/n);
	printf("\n");
	printf("The value of a=%f and b=%f", a , b);
	printf("\n");
	printf("The required euation is y=%f+%fx", a, b);
	return 0;
}
