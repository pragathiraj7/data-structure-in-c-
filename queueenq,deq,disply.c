#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum capacity of the stack

int stack[MAX];
int top = -1;  // Indicates empty stack

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    top++;
    stack[top] = value;
    printf("%d pushed to stack.\n", value);
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
        return -1;
    }
    int poppedValue = stack[top];
    top--;
    return poppedValue;
}

// Function to view the top element
int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top];
}

// Main function to demonstrate operations
int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element (Peek): %d\n", peek());

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());

    printf("Top element after pops: %d\n", peek());

    return 0;
}