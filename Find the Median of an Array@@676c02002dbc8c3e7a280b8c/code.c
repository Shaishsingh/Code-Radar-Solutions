#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int mid = n / 2;

    if (n % 2 == 0) {
        int median = (arr[mid] + arr[mid - 1]) / 2;
        printf("%d", median);
    } else {
        printf("%d", arr[mid]);
    }

    return 0;
}
