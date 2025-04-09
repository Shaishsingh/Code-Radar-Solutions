#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows for the top half

    int p = (2 * n) - 1;  // Total rows in the diamond

    for(int i = 1; i <= p; i++) {
        int stars = i <= n ? 2 * i - 1 : 2 * (p - i + 1) - 1;
        int spaces = i <= n ? n - i : i - n;

        // Print spaces
        for(int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print stars
        for(int j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
