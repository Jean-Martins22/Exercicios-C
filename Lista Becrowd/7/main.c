#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y=0;

    for(int i=1; i<=6; i++){
        scanf("%lf",&x);
        if(x>0){
            y=y+1;
        }
    }

    printf("%.0f valores positivos\n",y);
    return 0;
}
