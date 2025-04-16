#ifndef VALUESTACK_H
#define VALUESTACK_H
#include <iostream>
#include <vector> // For std::vector
#include <stdexcept> // For exceptions

template <class T>
class Stack {
    std::vector<T> stack; // Use std::vector for internal storage

public:
    // Constructor
    Stack() = default;

    // Push a new element onto the stack
    void push(const T& x) {
        stack.push_back(x); // Add element to the end of the vector
    }

    // Peek at the top element
    T peek() const {
        if (stack.empty()) {
            throw std::underflow_error("Stack is empty");
        }
        return stack.back(); // Return the last element
    }

    // Pop the top element
    T pop() {
        if (stack.empty()) {
            throw std::underflow_error("Stack is empty");
        }
        T topElement = stack.back();
        stack.pop_back(); // Remove the last element
        return topElement;
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return stack.empty();
    }
};

#endif // VALUESTACK_H