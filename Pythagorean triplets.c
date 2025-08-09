//Print pythagorean triplets
#include <stdio.h>
int main() {
    int x, y, z,num;
    printf ("Enter Number : ");
    scanf("%d",&num);
    for (x = 1; x <= num; x++) {
        for (y = x; y <= num; y++) {
            for (z = y; z <= num; z++) {
            if (x*x+y*y==z*z)
                printf("%d %d %d\n", x, y, z);
            }
        }
    }
    return 0;
}
