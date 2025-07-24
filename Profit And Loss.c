#include <stdio.h>
#include <math.h>

// To print Profit and Loss
int main() {
float cprice,sprice,Pr;
    
    printf("Enter Cost Price : ");
    scanf("%f",&cprice);
    printf("Enter selling Price : ");
    scanf("%f",&sprice);
    Pr=sprice-cprice;
    if (Pr>0){
    printf("Your Profit is %f ",Pr);
          }
    else if (Pr<0){
    printf("You have a loss of %f ",Pr);}
    else { printf("Neither Profit Or Loss");}
    printf(" : ");
    return 0;
}
    