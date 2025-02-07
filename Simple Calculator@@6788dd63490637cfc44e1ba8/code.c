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
        case '-':
            result = a - b;
            printf("%d", result);
            break;
        case '*':
            result = a * b;
            printf("%d",result);
          break;
              case '/':
            if(b != 0){
                result = a / b;
                printf("%d", result);
            } else {
                printf("error");
            }
          break;
        default:
            printf("error");
            break;
    }

    return 0;
}
