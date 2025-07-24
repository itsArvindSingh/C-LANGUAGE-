#include <stdio.h>
//To print reverse of any Number 
int main()
{ int num,rnum;
rnum=0;
printf ("Enter Number : ");
scanf("%d",&num);
while (num>0){
rnum=rnum*10+num%10;
num=num/10;
}
printf("%d",rnum);
return 0;


}