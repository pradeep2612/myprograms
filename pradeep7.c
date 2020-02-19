#include<stdio.h>
#include<math.h>
float main()
{
float a, b, h, area;
printf("enter the value of a:\n");
scanf("%f", &a);
printf("enter the value of b:\n");
scanf("%f", &b);
printf("enter the value of h:\n");
scanf("%f", &h);
area=0.5*(a+b)*h;
printf("area of a trapezoid=%.2f\n",area);
}
