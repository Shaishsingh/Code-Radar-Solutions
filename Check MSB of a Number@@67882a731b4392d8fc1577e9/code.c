#include<stdio.h>
int main(){
    int num , result;
    scanf("%d",&num);
    result = num << 1;
    if(result & 1)
    { printf("Set"); }
    else 
    {printf("Not Set");}
    return 0;
}