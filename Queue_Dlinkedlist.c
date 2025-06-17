#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Front and rear pointers
struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue: add at rear
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }

    printf("%d enqueued to queue\n", value);
}

// Dequeue: remove from front
void dequeue() {
    if (front == NULL) {
        printf("Queue is empty! Cannot dequeue.\n");
        return;
    }

    struct Node* temp = front;
    front = front->next;

    if (front != NULL)
        front->prev = NULL;
    else
        rear = NULL;  // Queue becomes empty

    printf("%d dequeued from queue\n", temp->data);
    free(temp);
}

// Display the queue
void display() {
    struct Node* temp = front;

    if (temp == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
