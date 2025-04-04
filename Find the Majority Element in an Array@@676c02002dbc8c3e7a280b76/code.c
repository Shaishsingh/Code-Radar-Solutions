#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",arr[i]);
    }
    int c[n];
    int freq=1;
    for(int i =0;i<n;i++){
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        if(c[i]=1){
            contuine;
        }
        else{
            for(int j=i+1;j<n;j++){
             if(arr[i]=arr[j]){
                freq++;
                c[j]=0;
             }
        }
        }
    }
}