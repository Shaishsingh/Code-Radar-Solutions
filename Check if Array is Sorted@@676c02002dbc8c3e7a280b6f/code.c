#include<stdio.h>
int main(){
    int N,sorted =1;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i<N;i++){
    scanf("%d",&arr[i]);}
    for(int i = 1 ; i<N;i++){
        if(arr[i]<arr[i-1]){ printf("Sorted\n"); }
        else if((arr[i]>arr[i-1])=arr[N]){printf("Not Sorted\n");}    }
 
    return 0;
}