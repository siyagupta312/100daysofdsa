#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int getLength(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int getIntersection(struct Node* head1, struct Node* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);

    int diff;
    struct Node* ptr1;
    struct Node* ptr2;

    if (len1 > len2) {
        diff = len1 - len2;
        ptr1 = head1;
        ptr2 = head2;
    } else {
        diff = len2 - len1;
        ptr1 = head2;
        ptr2 = head1;
    }

    for (int i = 0; i < diff; i++)
        ptr1 = ptr1->next;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1 == ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

int main() {
    struct Node* head1 = createNode(10);
    head1->next = createNode(20);
    head1->next->next = createNode(30);

    struct Node* head2 = createNode(15);
    head2->next = head1->next->next;

    int result = getIntersection(head1, head2);

    if (result != -1)
        printf("Intersection at node with value = %d", result);
    else
        printf("No intersection");

    return 0;
}