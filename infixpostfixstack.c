#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char val) {
    stack[++top] = val;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

void infixToPostfix(char* exp) {
    printf("Postfix Expression: ");
    
    for (int i = 0; exp[i] != '\0' && exp[i] != '\n'; i++) {
        char ch = exp[i];

        if (isalnum(ch)) {
            printf("%c", ch);
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                printf("%c", pop());
            }
            pop(); // Remove '('
        } else {
            while (!isEmpty() && precedence(peek()) >= precedence(ch)) {
                printf("%c", pop());
            }
            push(ch);
        }
    }

    while (!isEmpty()) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    char exp[MAX];

    // Read user input
    printf("Enter Infix Expression (e.g., A+(B*C)): ");
    fgets(exp, sizeof(exp), stdin);

    infixToPostfix(exp);

    return 0;
}