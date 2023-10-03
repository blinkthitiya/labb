#include <stdio.h>
#define pi 3.416

int main()
{
    int r;
    float a,cir;
    r=3;
    a=pi*r*2;
    cir=2*pi*r;
    printf("The area of the circle of radius %d is ",r);
    printf("%.2f\n",a);
    printf("The circumference of the same circle is %.2f\n",cir);

    return 0;
}
