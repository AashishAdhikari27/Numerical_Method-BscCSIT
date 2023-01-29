#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float t[100], v[1000];
	float  ti, ve=0, p=1;
	int n,i, j;
	printf("Enter the number of data:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value of time t[%d]=", i);
		scanf("%f", &t[i]);
		printf("Enter the value of velocity v[%d]=", i);
		scanf("%f", &v[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Value of time t[%d]=%2f\t\t", i, t[i]);
		printf("Value of velocity v[%d]=%2f\n", i, v[i]);
	}
	printf("\n");
	printf("Enter the value of t to find the v:");
	scanf("%f", &ti);
	for(i=0;i<n;i++)
	{
		p=1;
		
			for(j=0;j<n;j++)
			{
				if(i!=j)
				{
					p = p* (ti - t[j])/(t[i] - t[j]);
				}
			
			}
		ve = ve + p * v[i];
	}
	printf("The functional value of %f is %f", ti, ve);
	getch();
	
}
