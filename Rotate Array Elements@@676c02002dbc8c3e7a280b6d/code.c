#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    if (k==0){
        for ( int i =0;i<n;i++){
        printf("%d\n",arr[i]);}
    }
    else {
        int am[n];
        for(int i = 0; n==0;n--){
            am[i]=arr[n-k-1];
            printf("%d",&am[i]);

        }
    }
  return 0;
}
