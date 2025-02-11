#include <stdio.h>
int main(){
    int a,i,num=1;
    scanf("%d",&a);
    for(i=2;i<=a;,i++){
        if(a%i==0){
            num=0;
            break;
        }
    }
    if(num){printf("Prime");}
    else(printf("Not Prime");)
    return 0;
    }