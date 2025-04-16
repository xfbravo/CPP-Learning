#include "ValueStack.h"
#include "SelfCounter.h"
#include <iostream>
using namespace std;

int main() {
    Stack<SelfCounter> sc; // No need to specify initial size
    for (int i = 0; i < 10; i++) {
        sc.push(SelfCounter());
    }
    // OK to peek(), result is a temporary:
    cout << "Top of stack: " << sc.peek() << endl;
    while (!sc.isEmpty()) {
        cout << sc.pop() << endl;
    }
    return 0;
}