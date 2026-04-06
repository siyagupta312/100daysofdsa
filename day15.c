#include <stdio.h>

int main() {
    int a[100][100], n, i, sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of primary diagonal: %d\n", sum);

    return 0;
}