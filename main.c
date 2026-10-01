#include <stdio.h>
#include <math.h>

double func(double x) {
    return pow(x / 100.0 - 5.0, 5)
         - pow(x / 50.0 + 10.0, 4)
         - pow(x / 25.0 - 15.0, 3)
         - (x * x)
         - 10.0;
}

double dfunc(double x) {
    return (5.0 / 100.0) * pow(x / 100.0 - 5.0, 4)
         - (4.0 / 50.0)  * pow(x / 50.0 + 10.0, 3)
         - (3.0 / 25.0)  * pow(x / 25.0 - 15.0, 2)
         - (2.0 * x);
}

int main() {
    double X1, X2, delta;
    unsigned int N;
    int mode;

    printf("Enter mode [1, 2]: ");
    scanf("%d", &mode);

    if (mode != 1 && mode != 2) {
        printf("invalid mode \n");
        return 0;
    }

    printf("Enter X1: ");
    scanf("%lf", &X1);

    printf("Enter X2: ");
    scanf("%lf", &X2);

    if (X1 > X2) {
        printf("X2 cant be > than X1\n");
        return 0;
    }

    if (mode == 1) {
        printf("Enter N: ");
        scanf("%u", &N);

        if (N <= 1) {
            printf("N cant be <= 1\n");
            return 0;
        }

        delta = (X2 - X1) / (double)(N - 1);

    } else if (mode == 2) {
        printf("Enter delta: ");
        scanf("%lf", &delta);

        if (delta <= 0) {
            printf("delta cant be <= 0\n");
            return 0;
        }

        N = (unsigned int)((X2 - X1) / delta) + 1;
    }

    printf("\nX1 = %lf, X2 = %lf, N = %u, delta = %lf\n\n", X1, X2, N, delta);

    printf("N \t X \t \t f(X) \n");
    for (unsigned int i = 1; i <= N; i++) {
        double x = X1 + (double)(i - 1) * delta;
        double y = func(x);
        printf("%u \t %lf \t %lf \n", i, x, y);
    }

    printf("\n");

    printf("N\t X\t \t df(X) \n");
    for (unsigned int i = 1; i <= N; i++) {
        double x = X1 + (double)(i - 1) * delta;
        double dy = dfunc(x);
        printf("%u \t %lf \t %lf \n", i, x, dy);
    }
    return 0;
}