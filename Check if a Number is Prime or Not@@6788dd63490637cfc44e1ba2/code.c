#include <stdio.h>

int main() {
    int a, i, num = 0;
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            num++;
        }
    }

    if (num == 2) { 
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
