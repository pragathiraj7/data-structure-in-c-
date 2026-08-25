#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Reduced size to test easily

int queue[SIZE];
int front = -1, rear = -1;

// Function to add an element
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is Full!\n");
        return;
    }
    if (front == -1) {
        front = 0; // First element being added
    }
    rear++;
    queue[rear] = value;
    printf("Inserted %d successfully.\n", value);
}

// Function to remove an element
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);
    front++;
    
    // Reset queue pointers if all elements are deleted
    if (front > rear) {
        front = rear = -1;
    }
}

// Function to display elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
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
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}