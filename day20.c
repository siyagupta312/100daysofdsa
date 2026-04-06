#include <stdio.h>

int main() {
    int arr[100], n, i, j, sum, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = i; j < n; j++) {
            sum += arr[j];
            if(sum == 0) {
                count++;
            }
        }
    }

    printf("Number of subarrays with sum 0: %d\n", count);

    return 0;
}