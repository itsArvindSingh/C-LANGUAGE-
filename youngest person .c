#include <stdio.h>

int main() {
    int rage, sage, aage;

    // Input ages of Ram, Shyam, and Ajay
    printf("Enter age of Ram: ");
    scanf("%d", &rage);

    printf("Enter age of Shyam: ");
    scanf("%d", &sage);

    printf("Enter age of Ajay: ");
    scanf("%d", &aage);

    // Step 1: Check if all three are equal
    if (rage == sage && sage == aage) {
        printf("All three - Ram, Shyam, and Ajay - are of the same age.\n");
    }
    // Step 2: Check if Ram and Shyam are equal
    else if (rage == sage) {
        if (aage < rage) {
            printf("The youngest person is: Ajay\n");
        } else if (aage > rage) {
            printf("Ram and Shyam are the youngest.\n");
        }
    }
    // Step 3: Check if Shyam and Ajay are equal
    else if (sage == aage) {
        if (rage < sage) {
            printf("The youngest person is: Ram\n");
        } else if (rage > sage) {
            printf("Shyam and Ajay are the youngest.\n");
        }
    }
    // Step 4: Check if Ram and Ajay are equal
    else if (rage == aage) {
        if (sage < rage) {
            printf("The youngest person is: Shyam\n");
        } else if (sage > rage) {
            printf("Ram and Ajay are the youngest.\n");
        }
    }
    // Step 5: All are different ages
    else if (rage < sage && rage < aage) {
        printf("The youngest person is: Ram\n");
    }
    else if (sage < rage && sage < aage) {
        printf("The youngest person is: Shyam\n");
    }
    else {
        printf("The youngest person is: Ajay\n");
    }

    return 0;
}
