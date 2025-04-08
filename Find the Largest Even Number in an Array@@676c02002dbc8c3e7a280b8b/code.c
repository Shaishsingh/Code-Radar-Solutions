#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int large ;   //if you initilize large =0 it will not include negative number
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count = 1;
            if(arr[i]>large){
                  large=arr[i];
            }
        }
    }
    if(count==0){
        printf("-1");
    }
    else{
        printf("%d",large);
    }
}

