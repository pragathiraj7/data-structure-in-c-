#include<stdio.h>
#include<stdlib.h>
#define max 100

int stack[max];
int top = -1;

void push(){
    int value;
    if(top == max - 1){
        printf("stack is full\n");
        return;
    }
    printf("enter the value to be pushed: ");
    scanf("%d", &value);
    top++;
    stack[top] = value;
    printf("value pushed successfully\n");
}

void pop(){
    if(top == -1){
        printf("stack is empty\n");
        return;
    }
    printf("the popped value is %d\n", stack[top]);
    top--;
}

void peek(){
    if (top == -1){
        printf("stack is empty\n");
        return;
    }
    printf("current value is %d\n", stack[top]); // Syntax error fixed here
}

void display(){
    if(top == -1){
        printf("stack is empty\n");
        return;
    }
    printf("stack elements are: ");
    for(int i = top; i >= 0; i--){
        printf("%d ", stack[i]); // Added space between numbers
    }
    printf("\n");
}

int main(){
    int choice;
    while(1){
        printf("\n--- stack operation ---");
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("invalid choice\n");
        }
    }
    return 0;
}
