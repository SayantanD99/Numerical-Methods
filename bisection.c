#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
  return(x*x*x-4*x-9);
}
void main()
{
  float x,a,b,fx,x1,e=0.0005;
  printf("Output \n");
  printf("Supply the value of 'a' an 'b' \n");
  scanf("%f %f",&a,&b);
  do
  {
    x=(a+b)/2;
    fx=f(x);
    if(fx>0)
    {
      b=x;
    }
    else
    {
      a=x;
    }
    x1=(a+b)/2;
  }
  while(fabs(x1-x)>e);
  printf("The root = %0.4f",x);
}
