#include <stdio.h>

void findLeaders(int arr[], int size) {
    int maxFromRight = arr[size - 1];  // Last element is always a leader
    printf("Leaders in the array: ");
    printf("%d ", maxFromRight);  // Print the last element

    // Traverse the array from second last to the beginning
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findLeaders(arr, size);

    return 0;
}
