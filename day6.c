#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n > 0) {
        j = 0;

        for(i = 1; i < n; i++) {
            if(arr[i] != arr[j]) {
                j++;
                arr[j] = arr[i];
            }
        }

        printf("Unique elements:\n");
        for(i = 0; i <= j; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}