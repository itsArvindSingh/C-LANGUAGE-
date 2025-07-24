#include <stdio.h>
//To print Sum of difitof any Number 
int main()
{long int num,sum;
sum=0;
printf ("Enter Number : ");
scanf("%d",&num);
while (num>0){
sum+=num%10;
num=num/10;
}
printf("%d",sum);
return 0;


}