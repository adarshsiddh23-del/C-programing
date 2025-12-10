#include <stdio.h>
#include <stdlib.h>  // for abs()

int main() {
    int n, i;
    int arr[100];
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    int diff = abs(evenSum - oddSum);

    printf("Absolute difference = %d\n", diff);

    return 0;
}
