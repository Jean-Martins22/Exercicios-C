#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y,z;

    scanf("%lf",&x);
    scanf("%lf",&y);

    z= ((x*3.5)+(y*7.5))/11;

    printf("MEDIA = %.5f\n",z);

    return 0;
}
