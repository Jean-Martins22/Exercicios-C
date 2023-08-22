#include <stdio.h>
#include <stdlib.h>

int main() {
    double S = 0.0;
    double denominador = 1.0;

    for (int numerador = 1; numerador <= 39; numerador += 2) {
        S += numerador / denominador;
        denominador *= 2.0;
    }

    printf("%.2lf\n", S);

    return 0;
}
