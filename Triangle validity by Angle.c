#include<stdio.h>

int main()
{int A,B,C,sum;
printf("Enter Frist Angle in Degree : \n");
scanf("%d",&A);
printf("Enter Second Angle in Degree : \n");
scanf("%d",&B);
printf("Enter Third Angle in Degree : \n");
scanf("%d",&C);
sum=A+B+C;
if (sum==180){printf("Triangle Is Valid.");}
else {printf("Triangle Is Not Valid.");}

    return 0;
}