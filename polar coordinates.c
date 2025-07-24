#include <stdio.h>
#include <math.h>
//To print polar coordinates 
int main()
{ float x,y,r,Q;
printf("Enter x :");
scanf("%.4f",&x);
printf("Enter y :");
scanf("%.4f",&y);
r=sqrt(x*x+y*y);
Q=atan(y/x);
printf("Polar coordinate is (%f,%f) ",r,Q);
return 0;


}