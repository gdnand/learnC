#include <stdio.h>

int main(void) {
    for (int i = 0; i < 6; i++) {
        for (int j = 6; j > 1; j--) {
            printf(".");
        }
        printf("\n");
    }
    return 0;
}
