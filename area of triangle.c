#include <stdio.h>
#include <math.h>
//To print area of a trianusing three sides 
int main()
{ int l1,l2,l3;
float sm,sa ,area;
printf("Enter l1 : ");
scanf("%d",&l1);
printf("Enter l2 : ");
scanf("%d",&l2);
printf("Enter l3 : ");
scanf("%d",&l3);
sm=(l1+l2+l3)/2;
sa=sm*(sm-l1)*(sm-l2)*(sm-l3);
area=pow(sa,0.5);

printf("%.4f",area);
return 0;


}