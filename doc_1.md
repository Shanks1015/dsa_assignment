# Program 1: Balanced Parentheses Checker

# Overview

Checks whether a mathematical expression has balanced parentheses, brackets, and braces using a stack.

Data Structure
typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;


items[] → stores opening brackets

top → index of top element (-1 if empty)

MAX_SIZE → maximum stack size (100)

Functions

initStack → initializes stack

isEmpty / isFull → check stack status

push / pop / peek → stack operations

isOpening / isClosing → identify brackets

isMatchingPair → checks if opening and closing brackets match

isBalanced → main algorithm:

Push opening brackets

Pop and match on closing brackets

Return true if stack empty at end

Main Function

Automated Testing → tests predefined expressions

Interactive Mode → user enters custom expressions until typing quit

Sample Output
Expression: a + (b - c) * (d
Result: NOT BALANCED

Expression: a + (b - c)
Result: BALANCED

Interactive Mode:
> (a + b) * [c - {d / e}]
Parentheses are balanced.

> ((a + b)
Parentheses are NOT balanced.

> quit
Program exited.

Complexity

Time: O(n)

Space: O(n)

Test Cases
Expression	                            Result
a + (b - c) * (d	                NOT BALANCED
m + [a - b * (c + d * {m)]	        NOT BALANCED
a + (b - c)	                        BALANCED