#include<stdio.h>
int main(){
     int n,k;
     scanf("%d",&n);
     int arr[n];
     for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     scanf("%d",&k);
     int ar[n];
     for(int i =0;i<n;i++){
        for(int j=k;j=0;k--){
            ar[j]=arr[i];
        }
     }
     printf("%d",ar[n]);
    return 0;
}