#include<iostream>
#include<math.h>
#include<iomanip>     //setw ko lagi header file
using namespace std;
double f(double x);     //function prototype

double f(double x)      //function body
{
  double  a= pow(x,2)-4*x-10.0;         //given equation
    return a;
}
int main()
{   top:
    cout.precision(4);              //precision setting for how much decimal point to be taken;
    cout.setf(ios::fixed);          //precision setting for how much decimal point to be taken;
    double a,b,c,e,fa,fb,fc;
    cout<<"Enter the initial guess";
    cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"Enter the degree of accuracy"<<endl;     //maintaining upto how much decimal point correction.
    cin>>e;
    int iter=0;
    if (f(a)*f(b)>0)
    {
        cout<<"Insert the valid initial guess"<<endl;
        goto top;
    }
    else
    {

        cout<<"Iter"<<setw(14)<<"a"<<setw(14)<<"b"<<setw(14)<<"c"<<setw(14)<<"f(c)"<<setw(14)<<"Error"<<setw(14)<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        while(fabs(a-b)>= e)        //if ayeko error is greater than inputed error then condition stop.
                                    //fabs vaneko keyword i.e defined in math.h and it find out absolute difference.
        {
            c=(a+b)/2.0;
            fa=f(a);        //f(a) use garirakhna vanda 'fa' use garna sajilo huncha vanera initialize mathi nai vayesakyo hai!
            fb=f(b);
            fc=f(c);
            iter++;
            cout<<iter<<setw(14)<<a<<setw(14)<<b<<setw(14)<<c<<setw(14)<<fc<<setw(14)<<fabs(a-b)<<endl;

            if(fc==0)
            {

                cout<<"The root of the equation is"<<c<<endl;
                return 0;

            }
            if (fa*fc<0)        // like in copy if f(x0)*f(x1)<0 root lies between x0 and x1 hence x1
                                //remains same and x2 changes to x0.
            {
                b=c;            // note: here  f(x1)means fa f(x0) means fc;

            }
            else if(fb*fc<0)        // like in copy if[f(x0)*f(x2)<0]root lies between x0 and x2 hence x2
                                //remains same and x1 changes to x0
                a=c;                  // note: here  f(X2) means fb and f(x0) means fc;

        }

    }

      cout<<"The root of the equation is"<<c<<endl;
       


}
