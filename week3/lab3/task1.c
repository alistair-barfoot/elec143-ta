#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{
    float y;
    printf("y = ");
    scanf("%f", &y);

    float x;
    printf("initial guess x = ");
    scanf("%f", &x);

    int count = 0;
    float f_x;
    while (true)
    {
        // The function "exp" calculates "e" to the power of a floating-point number.
        f_x = exp(-x * x);
        float diff = f_x - y;

        // The function "fabs" calculates the absolute value of a floating-point number.
        if (fabs(diff) < 0.0001)
            break;

        // The derivative of f is -2e^(-x^2)x.
        float f_slope = -2.0 * exp(-x * x) * x;
        x -= diff / f_slope;

        count += 1;
    }

    printf("f(%f) = %f (%d iterations)\n", x, f_x, count);

    return 0;
}
