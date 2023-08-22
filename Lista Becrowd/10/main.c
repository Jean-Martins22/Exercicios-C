#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    double x, y, z;

    scanf("%s",&n);
    scanf("%lf",&x);
    scanf("%lf",&y);

    z = x + (y*0.15);

    printf("TOTAL = R$ %.2f\n",z);


    return 0;
}
