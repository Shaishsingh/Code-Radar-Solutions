#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int a;
    scanf("%s%s%d",&str1,&str2,&a);
    printf("Name: %s",str1);
    printf("Age: %d",a);
    printf("Hobby: %s",str2);
    return 0;
}