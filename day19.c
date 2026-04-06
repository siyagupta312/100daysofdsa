#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[100], n, i, left, right;
    int min_sum, sum, x, y;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    left = 0;
    right = n - 1;
    min_sum = arr[left] + arr[right];
    x = arr[left];
    y = arr[right];

    while(left < right) {
        sum = arr[left] + arr[right];

        if(abs(sum) < abs(min_sum)) {
            min_sum = sum;
            x = arr[left];
            y = arr[right];
        }

        if(sum < 0)
            left++;
        else
            right--;
    }

    printf("Elements: %d %d\n", x, y);
    printf("Closest sum: %d\n", min_sum);

    return 0;
}