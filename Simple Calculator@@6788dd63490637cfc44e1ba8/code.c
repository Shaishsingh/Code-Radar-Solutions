#include<stdio.h>

int main(){
    int a, b, result;
    char ch;

    // Read two integers and a character
    scanf("%d %d %c", &a, &b, &ch);

    // Perform operation based on character
    switch(ch){
        case '+':
            result = a + b;
            printf("%d", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}

