#include <stdio.h>

int main() {
    int a[100][100], n, i, j, flag = 1;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && a[i][j] != 1)
                flag = 0;
            if(i != j && a[i][j] != 0)
                flag = 0;
        }
    }

    if(flag)
        printf("Identity matrix\n");
    else
        printf("Not an identity matrix\n");

    return 0;
}