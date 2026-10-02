#include "my_math.h"
#include <math.h>

double func(double x) {
    return pow(x / 100.0 - 5.0, 5)
         - pow(x / 50.0 + 10.0, 4)
         - pow(x / 25.0 - 15.0, 3)
         - pow(x, 2)
         - 10.0;
}

double dfunc(double x) {
    return (5.0 / 100.0) * pow(x / 100.0 - 5.0, 4)
         - (4.0 / 50.0)  * pow(x / 50.0 + 10.0, 3)
         - (3.0 / 25.0)  * pow(x / 25.0 - 15.0, 2)
         - (2.0 * x);
}