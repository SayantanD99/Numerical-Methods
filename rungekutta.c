#include<stdio.h>
#include<math.h>
float f(float x, float y);
int main()
{
    float x0,y0,k1,k2,k3,k4,y,x,h,xn;
    printf("Enter x0, y0, xn, h : \n");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\n X \t  Y \n");
    while(x<xn)
    {
        k1=h*(f(x,y));
        k2=h*(f((x+h/2.0),(y+k1/2.0)));
        k3=h*(f((x+h/2.0),(y+k2/2.0)));
        k4=h*(f((x+h),(y+k3)));
        y=y+((k1+2*k2+2*k3+k4)/6);
        x=x+h;
        printf("%0.1f \t %0.4f \n",x,y);
            }
}
float f(float x, float y)
{
    float m;
    m=x+y;
    return m;
}
