// Program to calculate a raised to the power b using pow() with double input
#include <math.h>
#include <stdio.h>
int main() {
    double a, b;
    printf ("Enter a : ");
    scanf("%lf",&a);
    printf ("Enter b : ");
    scanf("%lf",&b);
    double result = pow(a, b);  
    printf("%lf\n", result);
    return 0;
}
