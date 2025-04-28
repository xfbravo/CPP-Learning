#include <iostream>

using namespace std;

class Test{
    friend void func(Test& t);

private:
    int a=1;
public:
    void print() {
        cout << "a = " << a << endl;
    }
};

void func(Test& t) {
    t.a = 10; // Accessing private member 'a' of class Test
}

int main() {
    Test t;
    func(t); // Call the friend function to modify private member 'a'
    t.print(); // Output: a = 10
    return 0;
}