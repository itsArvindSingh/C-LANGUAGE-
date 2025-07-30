#include <stdio.h>
//To print Sum of digit of any Number 
int main()
{long int num,sum;
sum=0;
printf ("Enter Number : ");
scanf("%ld",&num);
while (num>0){
    sum+=num%10;
    num=num/10;
}
printf("%d",sum);
return 0;


}
