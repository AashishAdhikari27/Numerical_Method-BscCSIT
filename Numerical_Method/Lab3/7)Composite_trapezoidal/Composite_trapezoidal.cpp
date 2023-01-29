#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sqrt(1+(x)*(x))
int main()
{
	float a,h,x0,xn,fx0,fxn,term,v;
	int i,k;
	printf("Enter lower and upper limit\n");
	scanf("%f%f",&x0, &xn);
	printf("Enter Number of segments\n");
	scanf("%d", &k);
	h=(xn-x0)/k;
	fx0=f(x0);
	fxn=f(xn);
	term=f(x0)+f(xn);
	for(i=1;i<=k-1; i++)
	{
		a=x0+i*h;
		term=term+2*(f(a));
	}
	v=h/2*term;
	printf("Value of integration=%f\n", v);
	return 0;
}
