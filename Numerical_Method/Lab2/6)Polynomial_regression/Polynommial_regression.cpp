#include<stdio.h>
#include<math.h>
int main()
{
 int n, I, j, k,i;
 float Sx=0, Sxsq=0, Sy=0, Sxy=0, x, y;
 float Sx3=0, Sx4=0, Sxsqy=0, a[20][20], u = 0.0, b[20];
 printf("enter number of data points: ");
 scanf("%d",&n);
 for(i = 0; i < n; i++)
 {
    	printf("Enter x[%d]: ",i);
        scanf("%f",&x);
        printf("Enter y[%d]: ",i);
        scanf("%f",&y);
  Sx += x;
  Sxsq += pow(x, 2);
  Sx3 += pow(x, 3);
  Sx4 += pow(x, 4);
  Sy += y;
  Sxy += x * y;
  Sxsqy += pow(x, 2) * y;
 }
 a[0][0] = n;
 a[0][1] = Sx;
 a[0][2] = Sxsq;
 a[0][3] = Sy;
 a[1][0] = Sx;
 a[1][1] = Sxsq;
 a[1][2] = Sx3;
 a[1][3] = Sxy;
 a[2][0] = Sxsq;
 a[2][1] = Sx3;
 a[2][2] = Sx4;
 a[2][3] = Sxsqy;
 for(k = 0; k <= 2; k++)
 {
  for(i = 0; i <= 2; i++)
  {
   if(i != k)
    u = a[i][k]/a[k][k];
   for(j = k; j <= 3; j++)
    a[i][j] = a[i][j] - u * a[k][j];
  }
 }
 
 for(i = 0; i < 3; i++)
 {
  b[i] = a[i][3]/a[i][i];
 }

 printf("\n\nThe required polynomial fitting equation  is :- \ny = %.1f +  %.1fx + %.1fx^2", b[0], b[1], b[2]);
}

