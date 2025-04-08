#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int count =0;
    for(int i=0;i<n;i++){
        int num =arr[i];
        int not_changed_num = num;
        int rev=0;
    }
    while(num>0){
        int digit=num%10;
       rev = rev*10 +digit;
       num =num/10;
    }
    if(not_changed_num==rev){
        printf("%d",&arr[i]);
    }
}



