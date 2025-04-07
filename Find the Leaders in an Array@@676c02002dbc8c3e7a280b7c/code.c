#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int leaders[size]; // To store leaders temporarily
    int count = 0;

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFromRight = arr[size - 1];
    leaders[count++] = maxFromRight; // Last element is always a leader

    // Traverse from second last to first
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = maxFromRight;
        }
    }

    // Print leaders in reverse to restore original order
    printf("Le
