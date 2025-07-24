#include <stdio.h>
#include <math.h>

// To print wind chill factor
int main() {
float val,radians;
    printf("Enter angle in Degree : ");
    scanf("%f",&val);
    radians=val*(M_PI/180);
    printf("Value of Sinx= %f",sin(radians));
    return 0;
}
