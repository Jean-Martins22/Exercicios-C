#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100], m=0, p;

    for(int i = 0; i < 100; i++){
        scanf("%d",&v[i]);
        if(v[i] > m){
            m = v[i];
            p = i;
        }
    }

    printf("%d\n",m);
    printf("%d\n",p);
    return 0;
}
