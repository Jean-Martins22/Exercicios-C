#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    double z,s;

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%lf",&z);

    s =y*z;

    printf("NUMBER = %d\n",x);
    printf("SALARY = U$ %.2f\n",s);
    return 0;
}
