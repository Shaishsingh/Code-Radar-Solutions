#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("-1\n");
        return 0;  //
    }
    int same = 1;          //if you ewant to use bool (true,false) ,soyou have to include#include <stdbool.h> 
    for(int i = 1;i<n;i++){
        if(arr[0] != arr[i]){
        same = 0;
        break;}
    }
    if(same){
        printf("-1\n");
    }
    
    for(int i =0;i<n;i++){
        
    }
}