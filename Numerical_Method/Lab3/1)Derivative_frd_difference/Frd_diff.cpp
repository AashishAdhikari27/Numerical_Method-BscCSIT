#include <stdio.h>
#define f(x) x*x
int main()
{
    float x,h,fx;
    
    printf("Enter x and h : ");
    scanf("%f%f",&x,&h);
    float fxplush  , f1x;
    fx = f(x);
    fxplush = f(x+h);
    f1x = (fxplush - fx)/h;
    printf("The value of derivative of x^2 at %.3f is %.3f",x,f1x);
    
    return 0;
}
