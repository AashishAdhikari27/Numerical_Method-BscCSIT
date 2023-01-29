#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x[100], y[100], c, d, e ,f, b, g, a;
	int i, n;
	c=d=e=f=0.0;
	printf("Enter the number of data:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value of x[%d]=", i);
		scanf("%f", &x[i]);
		printf("Enter the value of y[%d]=", i);
		scanf("%f", &y[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Value of x[%d]=%f\t\t", i, x[i]);
		printf("Value of y[%d]=%f\n", i, y[i]);
	}
	for(i=0; i<=n-1; i++)
	{
		c=c+x[i];
		d=d+log(y[i]);
		e=e+(x[i]*log(y[i]));
		f=f+(x[i]*x[i]);
	}
	b=((n*e)-(c*d))/((n*f)-(c*c));
	g= d/n-((b*c)/n);
	a=exp(g);
	printf("\n\t\t\tThe value is %f and %f\n", a,b);
	
	printf("\t\t\t The fitting equation is :- y = %fe^%fx", a ,b);
	return 0;
}
