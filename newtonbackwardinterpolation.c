#include<stdio.h>
#include<conio.h>
void main()
{
 float x[10],y[10],X,p=1,u,h,val;
 int i,j,n;
 printf("Output \n");
 printf("Number of Arguments : \n");
 scanf("%d",&n);
 printf("Enter the value of x and f(x): \n");
 printf("x \t\t f(x) \n");
 for(i=1;i<=n;i++)
 scanf("%f \t %f",&x[i],&y[i]);
 h=x[2]-x[1];
 printf("Value of x where the functional value is to be determined : \n");
 scanf("%f",&X);
 u=(X-x[n])/h;
 val=y[n];
 for(i=1;i<=n;i++)
 {
   for(j=n;j>=i+1;j--)
   y[j]=y[j]-y[j-1];
   p=p*(u+i-1)/i;
   val=val+p*y[n];
 }
 printf("The value of f (%f) = %f",X,val);
 getch();
}
