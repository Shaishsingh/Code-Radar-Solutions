#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for (int i = 0; i < n / 2; i++) {     //i<5/2 => 2<2.5 hence mid index will include
            if (arr[i] != arr[n - i - 1]) {   //last index is n-1 and -i is you know
            count = 1;
            break;
        }
    }

    if (count == 0) {
        printf("Yes"); 
    } else {
        printf("No");   
    }

    return 0;
}