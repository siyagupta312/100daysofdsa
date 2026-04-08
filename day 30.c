#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int power;
    struct Node* next;
};

struct Node* createNode(int coeff, int power) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertTerm(struct Node* head, int coeff, int power) {
    struct Node* newNode = createNode(coeff, power);

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    return head;
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->power);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
}

int main() {
    struct Node* poly = NULL;

    poly = insertTerm(poly, 3, 2);
    poly = insertTerm(poly, 5, 1);
    poly = insertTerm(poly, 6, 0);

    display(poly);

    return 0;
}