#include<stdio.h>
#include<conio.h>
float f (float x,float y)
{
    return (-(x*y*y));
}
void main()
{
    float x0,y0,x,y,h;
    int i,n;
    printf("Output \n");
    printf("Supply the values of x0,y0,x,n : \n");
    scanf("%f %f %f %d",&x0,&y0,&x,&n);
    h=(x-x0)/n;
    x=x0;
    y=y0;
    for(i=1;i<=n;i++)
    {
        y=y+h*f(x,y);
        x=x+h;
    }
    printf("y[%f] = %f",x,y);
    getch();
}
