#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left = 0, right, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    right = strlen(str) - 1;

    while(left < right) {
        if(str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if(flag)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}