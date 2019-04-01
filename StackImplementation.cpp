#include <iostream>

using namespace std;

int top = -1; //Initially Stack is Empty

void push (int stack[], int x, int n) {
    if (top == n-1) { // If top of stack is pointing to the
        cout << "Stack is Full. OVERFLOW condition!!\n";
    }
    else {
        top++;
        stack[top] = x; // Inserting value at the incremented position of top.
    }
}

bool isEmpty () {
    if (top == -1) { // If stack is impty.
        return true;
    }
    else {
        return false;
    }
}

void pop (int stack[], int n) {
    if (isEmpty()) { // If stack is empty.
        cout << "Stack is Empty. UNDERFLOW condition!!\n";
    }
    else {
        top--; // Decrementing the top will detach the top element from the stack;
    }
}

int size () {
    return top+1;
}

int topElement (int stack[]) {
    return stack[top];
}

int main () {
    int stack[3]; // Initializing stack with size 3;

    push (stack, 19, 3); // Push 19 into stack
    cout << "Current size of stack " << size() << "\n";

    push (stack, 20, 3); // Push 20 into stack
    push (stack, 21, 3); // Push 21 into stack
    cout << "Current size of stack " << size() << "\n";

    push (stack, 25, 3); // Push 25 into stack

    cout << "Current top element of stack " << topElement(stack) << "\n";

    for (int i = 0; i < 3; i++) {
        pop(stack, i); // Pop all elements of stack.
    }

    cout  << "Current size of stack " << size() << "\n";

    pop(stack, 3); // Pop more element.
}
