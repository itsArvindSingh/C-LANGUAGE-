#include <stdio.h>
//To print reverse of any Number 
int main()
{ int num,temp,rnum;
rnum=0;
printf ("Enter Number : ");
scanf("%d",&num);
temp=num;
while (num>0){
rnum=rnum*10+num%10;
num=num/10;
}
printf("%d \n",rnum);
if (temp==rnum)
{
printf("Reversed Number Is equal ");}
else {
printf("Reversed Number is Not Equal ");}
return 0;


}