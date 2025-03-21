#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    // Perform right shift only if k != 0
    if (k == 0) {
        // Print original array if k is 0
        for (int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
    } else {
        // Handle the right shift
        int am[n];
        k = k % n; // In case k is larger than n, shift it to a smaller range

        // Step 1: Copy the last k elements to the front of the 'am' array
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
        printf("\n");
    }

    return 0;
}
