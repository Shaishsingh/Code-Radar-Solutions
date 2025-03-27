#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read elements of the array
    }

    int counted[n]; // Array to track counted elements
    for (int i = 0; i < n; i++) {
        counted[i] = 0; // Initialize all values to 0
    }

    for (int i = 0; i < n; i++) {
        if (counted[i] == 1) {
            continue; // Skip if already counted
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1; // Mark duplicate as counted
            }
        }

        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
