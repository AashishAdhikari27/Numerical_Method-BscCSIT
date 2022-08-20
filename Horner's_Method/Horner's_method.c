#include <stdio.h>

int main()
{
     float arr[100],sum=0,x;
     int n,i;

     printf("\nEnter degree of the polynomial X : \n");
     scanf("%d",&n);
     printf("\nEnter coefficient's of the polynomial X :: \n");
     for(i=n;i>=0;i--)
     {
            printf("\nEnter Coefficient of [ X^%d ] : ",i);
            scanf("%f",&arr[i]);
     }

     printf("\nEnter the value of X : ");
     scanf("%f",&x);

     for(i=n;i>0;i--)
     {
        sum=(sum+arr[i])*x;
     }

     sum=sum+arr[0];

     printf("\nValue of the polynomial at X = %f is =  %f \n",x,sum);

     return 0;
}
