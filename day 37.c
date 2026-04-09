#include <stdio.h>
#define MAX 5

int pq[MAX];
int size = 0;

void enqueue(int x) {
    if (size == MAX) {
        printf("Queue Overflow\n");
        return;
    }

    int i = size - 1;
    while (i >= 0 && pq[i] > x) {
        pq[i + 1] = pq[i];
        i--;
    }

    pq[i + 1] = x;
    size++;
}

void dequeue() {
    if (size == 0) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Removed: %d\n", pq[0]);

    for (int i = 1; i < size; i++)
        pq[i - 1] = pq[i];

    size--;
}

void display() {
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", pq[i]);
    printf("\n");
}

int main() {
    enqueue(30);
    enqueue(10);
    enqueue(20);
    enqueue(5);

    display();

    dequeue();

    display();

    return 0;
}