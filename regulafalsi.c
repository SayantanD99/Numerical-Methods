#include<stdio.h>
#include<math.h>
float f (float x)
{
    return (x*x*x-4*x-9);
}
void main()
{
    float x,a,b,f1,f2,f3,e=0.00005;
    printf("Output \n");
    printf("Supply the values of a & b : \n");
    scanf("%f %f",&a,&b);
    f1=f(a);
    f2=f(b);
    do
    {
      x=((a*f2)-(b*f1))/(f2-f1);
      f3=f(x);
      if(f3<0)
            a=x;
      else
        b=x;
    }
    while(fabs(f(a)-f(b))>e);
    printf("The root = %f",x);
}
