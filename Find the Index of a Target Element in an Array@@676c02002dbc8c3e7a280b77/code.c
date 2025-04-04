#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t,oop=0;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
     if(arr[i]==t){
        printf("%d",i);
        oop=1;
        break;
    }
    }
    if(oop==0){
        printf("-1");
    }
}