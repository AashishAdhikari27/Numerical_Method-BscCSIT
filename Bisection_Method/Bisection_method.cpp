#include<iostream>
#include<math.h>

using namespace std;
 
double f(double x);
double f(double x)
{
   double y = x*x*x-4*x-9;
   return y;
}
void main()
{
    double x1,x2,x3,f1,f2,f3,e;
    int iteration =0;
    top:
    cout<<"Enter the first two initial guesses :\n";
    cin>>x1>>x2;

    cout<<"Enter the stopping criteria :\n  ";
    cin>>e;


    if (f(x1)*f(x2)>0)
    {
        cout<<"Please insert the valid initial  guess !!";
        goto top;
    }
    cout<<"";


    if (f1*f3<0)      
            {
                x2=x3;       

            }
    else if(f2*f3<0)        
                x1=x3;              

        

    

      cout<<"The root of the equation is"<<x3<<endl;


     


}