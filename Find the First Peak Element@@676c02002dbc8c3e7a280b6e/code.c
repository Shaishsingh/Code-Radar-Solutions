#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N)
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);}
    for(int i =1;i<N;i++)
       if(arr[i]>arr[i-1]) {
        if(arr[i]>arr[i+1]){
            break;
            printf("%d",arr[i]);
        }}
return 0; 
}