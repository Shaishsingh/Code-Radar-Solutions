#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);}
    int rev =0;
    for(int i=0;i<n;i++){
        rev =rev + arr[i];
        printf("%d ",rev);
    }

}