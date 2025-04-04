#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int c[n];
    int freq=1;
    int max_freq=0,temp;
    for(int i =0;i<n;i++){
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        if(c[i]=1){
            continue;
        }
        for(int j=i+1;j<n;j++){
             if(arr[i]==arr[j]){
                freq++;
                c[j]=1;
             }
             }
        if(freq>max_freq){
           max_freq=freq;
        }     
        
    }
   printf("%d",freq); 

}