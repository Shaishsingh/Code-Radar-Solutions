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
    k = k%n;
    if (k==0){
        for ( int i =0;i<n;i++){
        printf("%d\n",arr[i]);}
    }
    else {
        int am[n];
       for (int i = 0; i < k; i++) {
            am[i] = arr[n - k + i];
        }

        // Step 2: Shift the remaining elements to the right in the 'am' array
        for (int i = k; i < n; i++) {
            am[i] = arr[i - k];
        }

        // Step 3: Print the shifted array
        for (int i = 0; i < n; i++) {
            printf("%d ", am[i]);
        }
        printf("\n")
    }
  return 0;
}
