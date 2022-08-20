#include<stdio.h>
#include<math.h>

//   Question anusar equation define garni

#define f(x) pow(x,3)-4*x-9

void main()
{
    float x1,x2,x3,f1,f2,f3,e;
    int iteration =1;
    top:
    printf("Enter the two initial guesses :\n");
    scanf("%f%f",&x1,&x2);
    

    printf("Enter the stopping criteria : \n");
    
    scanf("%f",&e);


    f1 = f(x1);
    f2 = f(x2);
    

    if (f1*f2 >0.0)
    {
     printf("Root doesn't lies between %f and %f.",x1,x2);
     
     goto top;
    }
    printf("\nIteration\t\tx1\t\tx2\t\tx3\t\tf(x3)\n");


    do
    {
      x3= (x1+x2)/2;

      f3= f(x3);

      printf("%d\t\t%f\t%f\t%f\t%f\n",iteration, x1, x2, x3, f3);
      if( f1 * f3 < 0)
	  {
		   x2 = x3;
		   f2 = f3;
	  }
	 else
	  {
		   x1 = x3;
		   f1 = f3;
	  }

     iteration ++;

    } while (fabs(f3)>e);

 printf("\nRoot is: %f", x3);

 
}
