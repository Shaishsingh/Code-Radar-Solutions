#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n==1){
        printf("-1\n");
    }
    bool same = true;
    for(int i = 0;i<n;i++){
        if(arr[0] != arr[i]){
        same = false;
        break;}
    }
    if(same){
        printf("-1\n");
    }
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        
    }
}