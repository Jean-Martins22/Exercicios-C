#include <stdio.h>
#include <stdlib.h>


int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int count = 0;

    for (int i = 1; i <= Y; i++) {
        printf("%d", i);
        count++;


        if (count == X) {
            printf("\n");
            count = 0;
        }
        else {
            printf(" ");
        }
    }

    return 0;
}
