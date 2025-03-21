// #include<stdio.h>
// int main(){
//     int N,sorted =1;
//     scanf("%d",&N);
//     int arr[N];
//     for(int i = 0; i<N;i++){
//     scanf("%d",&arr[i]);}
//     for(int i = 1 ; i<N;i++){
//         if(Sorted[i]<arr[i-1]){ sorted = 0; break; }
//     }
//    if (sorted) {
//         printf("Sorted\n"); }
//          else {
//         printf("Not Sorted\n");
//     }
//     return 0}



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted in ascending order
    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            printf("Not Sorted\n");
            return 0; // Exit early if the array is not sorted
        }
    }

    // If we reach here, the array is sorted
    printf("Sorted\n");
    
    return 0;
}




