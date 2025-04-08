#include<stdio.>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p[n];
    for(int i=0;i<n-1;i++){
        int digit =p[i+1]-p[i];
        int p[i]= digit;
    }
}