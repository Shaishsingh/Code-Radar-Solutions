#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index = 0;  // Points to the next position for non-zero element

    // First, move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the rest of the array with zeros
    while (index < n) {
        arr[index++] = 0;
    }

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
