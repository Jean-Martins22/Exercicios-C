#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    scanf("%d %d", &x,&y);
    z=x;

    if(x >= 1 && x <=20){
        if(y >= x && y <= 100000){
            for(int i = 1; i <= y; i++){
                printf("%d ",i);
                if(i == z){
                    printf("\n");
                    z = z + x;
                }
            }
        }
    }

    return 0;
}
