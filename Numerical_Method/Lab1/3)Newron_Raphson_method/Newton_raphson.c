#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) pow(x,2)-3*x+2  /* jun eqn solve garni ho tai define garni */

#define g(x) 2*x-3   /* mathi define gareko eqn ko first derivative lai pani define garni */

void main()
{

     float x0, x1, f0, f1, g0, e;
	 int iteration = 1, N;
	 printf("\nEnter initial guess : \n ");
	 scanf("%f", &x0);
     
     printf("Enter the stopping criteria : \n ");
	 scanf("%f", &e);

	 printf("Enter maximum  no. of iterations : \n ");
	 scanf("%d", &N);
	 

	 printf("\nIteration\t\tx0\t\tf0\t\tg0\t\tx1\n");


     do
     {
        f0 = f(x0);
        g0 = g(x0);

        if (g0 == 0)
        {
            printf("Error !!!!!");
            exit(0);
        }

        x1=  x0-(f0/g0);


        printf("%d\t\t%f\t%f\t%f\t%f\n",iteration,x0,f0,g0,x1);


        x0=x1;
    
        iteration ++;

        if (iteration > N)
        {
            exit(0);
        }

        f1 =f(x1);




     } while (fabs(f1)>e);

      printf("\nRoot is: %f", x1);
     



}
