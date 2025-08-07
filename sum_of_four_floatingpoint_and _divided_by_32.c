#include <stdio.h>
int main() {
    float num1,num2,num3,num4,sum,div;
    printf("Enter Number 1,2,3 and 4 :");
    scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
    sum=num1+num2+num3+num4;
    div=sum/32;
    printf("Sum is %f and sum divided  by 32 is %f ",sum,div);
    return 0;
}
    