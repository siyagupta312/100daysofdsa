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
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag)
        printf("Symmetric matrix\n");
    else
        printf("Not a symmetric matrix\n");

    return 0;
}