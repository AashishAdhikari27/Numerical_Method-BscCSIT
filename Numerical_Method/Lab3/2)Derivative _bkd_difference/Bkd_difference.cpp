#include <stdio.h>
#define f(x) x*x

int main()
{
    float x,h,fx;
    printf("Enter x and h:  ");
    scanf("%f%f",&x,&h);
    fx = f(x);
    
    float fxminush,f1x;
    fxminush = f(x-h);
    f1x = (fx - fxminush)/h;
    printf("The value of derivative of x^2 at %.3f is:- %.3f",x,f1x);
    
    return 0;
}
