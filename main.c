#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int a,b,c,min, max;
    printf("input 3 numbers: ");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a<=b && a<=c) min=a;
    else if(b<=c) min=b;
    else min=c;
    printf("the minimum value is %d\n",min);

    /*if([6]) max=a
    else if([7] max=b
    else max=c*/

    /*if (a<=b && a<=c) min=a
    if (b<=c && b<=a) min=b
    if (c<=b && c<=a) min=c*/

    if (a>=b && a>=c) max=a;
    else if(b>=c) max=b;
    else max=c;
    printf("the maximum value is %d\n",max);

    return 0;
}


