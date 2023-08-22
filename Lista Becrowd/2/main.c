#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double y, z;

    scanf("%d",&x);
    scanf("%lf",&y);

    z= x/y;

    printf("%.3f km/l\n",z);
    return 0;
}
