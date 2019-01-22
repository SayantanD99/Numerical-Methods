#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float x)
{
  return(1/(1+(x*x)));
    }
int main()
{
  float a,b,h,s=0,tr;
  int i,n;
  printf("OUTPUT \n");
  printf("Limit of the integration are \n");
  scanf("%f %f",&a,&b);
  printf("Number of divisions : \n");
  scanf("%d",&n);
  h=(b-a)/n;
  for(i=1;i<=n-1;i++)
  s=s+f(a+i*h);
  tr=h*(f(a)+f(b)+2*s)/2;
  printf("The value of integral = %f",tr);
  getch();
  return 0;
}
