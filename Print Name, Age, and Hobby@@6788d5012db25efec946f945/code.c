#include<stdio.h>
int main(){
    char str1[100];
    int a;
    char str2[100];
    scanf("%s %d %s",&str1,&a,&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",str2);
    return 0;
}