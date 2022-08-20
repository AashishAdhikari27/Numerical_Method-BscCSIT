#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) pow(x,2)-4*x-10

void main()
{
    float x1,x2,x3,f1,f2,f3,e,N;
    int Iteration =1 ;

    printf("Enter the initial guesses : \n");
    scanf("%f%f",&x1,&x2);

    printf("Enter the stopping criteria : \n");
    scanf("%f",&e);

    printf("Enter maximum iteration:\n");
	scanf("%f", &N);

    printf("\nIteration\t\tx1\t\tx2\t\tx3\t\tf(x3)\n");
    
    do
    {
        f1 = f(x1);
        f2 = f(x2);
        if (f1==f2)
        {
            printf("Error !!!");
            exit(0);
        }           
        x3= x2- ((f2 *(x2-x1))/(f2-f1));
        f3 = f(x3);

        printf("%d\t\t%f\t%f\t%f\t%f\n",Iteration,x1,x2,x3, f3);

        x1=x2;
        f1=f2;
        x2=x3;
        f2=f3;
        Iteration ++;

         if(Iteration > N)
		  {
			   exit(0);
		  }

    } while (fabs(f3)>e);
    printf("The root of the given equation is : %f ",x3);
    


}