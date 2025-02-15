#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    // Check the condition
    if (!(a >= 0) && !(b >= 0)) {
        printf("True");
    } else {
        printf("False"); // Corrected this line to use printf
    }
    
    return 0;
}