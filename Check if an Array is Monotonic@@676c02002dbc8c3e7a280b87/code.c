#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if array is sorted in ascending or descending
    int ascending = 1, descending = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            ascending = 0;
        }
        if (arr[i] > arr[i - 1]) {
            descending = 0;
        }
    }

    // If neither ascending nor descending, print YES
    if (!ascending && !descending) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
