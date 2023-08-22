#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y,z,m;

    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);

    m= (x*2+y*3+z*5)/10;

    printf("MEDIA = %.1f",m);
    return 0;
}
