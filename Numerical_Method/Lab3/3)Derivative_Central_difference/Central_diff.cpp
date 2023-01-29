#include <stdio.h>

#define f(x) x*x

int main()
{
    float x,h,fxplush;
    printf("Enter x and h:  ");
    scanf("%f%f",&x,&h);
    
    float fxminush,f1x;
    fxplush = f(x+h);
    fxminush = f(x-h);
    f1x = (fxplush - fxminush)/(2*h);
    printf("The value of derivative of x^2 at %.3f is %.3f",x,f1x);
    return 0;
}
