#include <stdio.h>

int main() {
    int arr[100], n, k, i, count = 0, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        count++;
        if(arr[i] == k) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Element found at position %d\n", i + 1);
    } else {
        printf("Element not found\n");
    }

    printf("Number of comparisons: %d\n", count);

    return 0;
}