#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) pow(x,2)-x-2
#define g(x) 2/(x+1)
int main()
{
     int iteration=1, N;
	 float x0, x1, e;

     printf("Enter initial guess: ");
	 scanf("%f", &x0);


	 printf("Enter tolerable error: ");
	 scanf("%f", &e);


	 printf("Enter maximum iteration: ");
	 scanf("%d", &N);


     printf("\nIteration\t\tx0\t\t x1=g(x0)\n");

     do
	 {
		  x1 = g(x0);
		  printf("%d\t\t%f\t\t%f\n",iteration, x0, x1);


          iteration++;
		
		  
		
		  if(iteration>N)
		  {
            break;
		  }
		  
		  x0 = x1;
		  
	 }while( fabs(x1)>e);
	 
	 printf("\nRoot is %f", x1);
	
	 
	 return(0);

}