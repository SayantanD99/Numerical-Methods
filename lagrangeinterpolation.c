#include<stdio.h>
#include<conio.h>
void main()
{
 float x[10],y[10],v,val=0,a;
 int i,j,n;
 printf("Output \n");
 printf("Number of Arguments : \n");
 scanf("%d",&n);
 printf("Enter the values of x : \n");
 for(i=0;i<n;i++)
 scanf("%f",&x[i]);
 printf("Enter the values of f(x) : \n");
 for(i=0;i<n;i++)
 scanf("%f",&y[i]);
 printf("Value of x where the functional value is to be determined : \n");
 scanf("%f",&a);
 for(i=0;i<n;i++)
 {
   v=y[i];
   for(j=0;j<n;j++)
   {
     if(j!=i)
     v=v*(a-x[j])/(x[i]-x[j]);
       }
       val=val+v;
 }
 printf("Result is : %f",val);
 getch();
}
