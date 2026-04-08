#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

int pop() {
    if (top == NULL)
        return -1;
    int val = top->data;
    struct Node* temp = top;
    top = top->next;
    free(temp);
    return val;
}

int main() {
    char exp[100];
    int i = 0;

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    while (exp[i] != '\0') {
        if (isdigit(exp[i])) {
            push(exp[i] - '0');
        } else {
            int val2 = pop();
            int val1 = pop();
            int result;

            switch (exp[i]) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
            }

            push(result);
        }
        i++;
    }

    printf("Result = %d", pop());

    return 0;
}