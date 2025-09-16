#include <stdio.h>
int main() {
   int n,temp,sum=0,r;
   printf("Enter Number : ");
   scanf("%d",&n);
   temp=n;
   while (n>0){
       r=n%10;
       sum=sum*10+r;
       n=n/10;
   }
   if (sum==temp){
       printf("%d is Palindrome number.\n",temp);
   }
   else {
       printf("%d is Not a palindrome number.\n",temp);
   }
    return 0;
}
