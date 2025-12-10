#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];

    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("Element not found\n");

    return 0;
}
