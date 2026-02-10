#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100

/* Stack structure */
typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

/* Initialize stack */
void initStack(Stack* s) {
    s->top = -1;
}

/* Check if stack is empty */
bool isEmpty(Stack* s) {
    return s->top == -1;
}

/* Check if stack is full */
bool isFull(Stack* s) {
    return s->top == MAX_SIZE - 1;
}

/* Push element onto stack */
void push(Stack* s, char c) {
    if (!isFull(s)) {
        s->items[++(s->top)] = c;
    }
}

/* Pop element from stack */
char pop(Stack* s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    }
    return '\0';
}

/* Check opening bracket */
bool isOpening(char c) {
    return (c == '(' || c == '[' || c == '{');
}

/* Check closing bracket */
bool isClosing(char c) {
    return (c == ')' || c == ']' || c == '}');
}

/* Check if brackets match */
bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

/* Check whether expression is balanced */
bool isBalanced(char* expression) {
    Stack s;
    initStack(&s);

    for (int i = 0; i < strlen(expression); i++) {
        char ch = expression[i];

        if (isOpening(ch)) {
            push(&s, ch);
        }
        else if (isClosing(ch)) {
            if (isEmpty(&s))
                return false;

            char top = pop(&s);
            if (!isMatchingPair(top, ch))
                return false;
        }
    }

    return isEmpty(&s);
}

int main() {
    char* testExpressions[] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]",
        "a + (b - c)"
    };

    int n = sizeof(testExpressions) / sizeof(testExpressions[0]);

    printf("Balanced Parentheses Checker Program\n");
    printf("-----------------------------------\n\n");

    for (int i = 0; i < n; i++) {
        printf("Expression: %s\n", testExpressions[i]);

        if (isBalanced(testExpressions[i]))
            printf("Result     : Parentheses are balanced.\n\n");
        else
            printf("Result     : Parentheses are NOT balanced.\n\n");
    }

    /* User input mode */
    char input[MAX_SIZE];
    printf("Enter your own expression (type 'exit' to stop):\n");

    while (1) {
        printf("> ");
        fgets(input, MAX_SIZE, stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0)
            break;

        if (isBalanced(input))
            printf("Parentheses are balanced.\n\n");
        else
            printf("Parentheses are NOT balanced.\n\n");
    }

    return 0;
}
