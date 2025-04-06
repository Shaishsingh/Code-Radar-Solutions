#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =1;
    for(int i =0;i<1;i++){
        if(arr[i]>arr[i+1]){
            for(int j=1+i;j<n;j++){
                if(arr[j]>arr[j-1]){
                    count=0;
                    break;
                }
            }   
            }
         if(arr[i]<arr[i+1]){
            for(int j=1+i;j<n;j++){
                if(arr[j]<arr[j-1]){
                    count=0;
                    break;
                }
            }   
            }
    }
    if(count==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}