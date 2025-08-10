//This is code to print prime number from 1 to 300
#include <stdio.h>
int main(){
    int i,j,T;
    for (i=1;i<=300;i++){
        T=0;
        for (j=i-1;j>1;j--){
            if (i%j==0){
                T=1;
                break;
            }
        }
    if (i==1){
        printf("%d Not Prime\n",i);
    }
    else if (T==0){
        printf("%d is Prime\n",i);
    }
    else {
        printf("%d is Not Prime\n",i);
    }
    }
    return 0;
}