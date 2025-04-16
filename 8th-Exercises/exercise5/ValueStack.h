#ifndef VALUESTACK_H
#define VALUESTACK_H
#include <iostream>
#include <stdexcept> // For exceptions

template <class T>
class Stack {
    T* stack;       // Dynamically allocated array
    int capacity;   // Current capacity of the stack
    int top;        // Index of the top element

    // Function to resize the stack when it runs out of space
    void resize() {
        capacity *= 2; // Double the capacity
        T* newStack = new T[capacity];
        for (int i = 0; i < top; i++) {
            newStack[i] = stack[i]; // Copy existing elements
        }
        delete[] stack; // Free the old memory
        stack = newStack;
        std::cout << "Stack resized to capacity: " << capacity << std::endl;
    }

public:
    // Constructor
    Stack(int initialSize = 100) : capacity(initialSize), top(0) {
        stack = new T[capacity];
    }

    // Destructor
    ~Stack() {
        delete[] stack;
    }

    // Push a new element onto the stack
    void push(const T& x) {
        if (top >= capacity) {
            resize(); // Resize if the stack is full
        }
        stack[top++] = x;
    }

    // Peek at the top element
    T peek() const {
        if (top == 0) {
            throw std::underflow_error("Stack is empty");
        }
        return stack[top - 1];
    }

    // Pop the top element
    T pop() {
        if (top == 0) {
            throw std::underflow_error("Stack is empty");
        }
        return stack[--top];
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return top == 0;
    }
};

#endif // VALUESTACK_H