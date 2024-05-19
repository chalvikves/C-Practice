#include <stdio.h>

int main() {
    for (int i = 0; i <= 6; i++) {
        if (i == 0) {
            printf("######\n");
        } else if (i == 3) {
            printf("#####\n");
        } else {
            printf("#\n");
        }
    }
    printf("\n");
    for (int i = 0; i <= 9; i++) {
        if (i == 0 || i == 9) {
            printf("   #####  \n");
        } else if (i == 1 || i == 8) {
            printf(" ##     ##\n");
        } else {
            printf("#\n");
        }
    }

    return 0;
};