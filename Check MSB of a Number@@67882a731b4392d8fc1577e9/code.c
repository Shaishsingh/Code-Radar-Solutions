#include<stdio.h>
int main(){
    int num , result;
    scanf("%d",&num);
    result = num << 31;
    if(result % 2 != 0)
    { printf("Set"); }
    else 
    {printf("Not Set");}
    return 0;
}