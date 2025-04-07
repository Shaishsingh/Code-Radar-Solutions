leaders[count++] = maxFromRight;#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    int leaders[size]; // To store leaders temporarily
    int count = 0;
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFromRight = arr[size - 1];
     // Last element is always a leader

    // Traverse from second last to first
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = maxFromRight;
        }
    }

    // Print leaders in reverse to restore original order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");

    return 0;
}
