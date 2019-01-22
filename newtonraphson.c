#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
  return(x*x*x-3*x+1);
}
float g(float x)
{
  return(3*x*x-3);
}
void main()
{
  float x,a,e=0.000005;
  printf("Output \n");
  printf("Supply the initial approximation value \n");
  scanf("%f",&a);
  do
  {
    x=a-(f(a)/g(a));
    if(fabs(f(x)-f(a))<e)
    break;
    else
    a=x;
  }
  while(1);
  printf("The root = %f",x);
}
