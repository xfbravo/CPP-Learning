#include <iostream>

using namespace std;

class test{
public:
    int a = 1;
    test(int a){
        this->a = a;
    }
};

int main() {
    // test t;//no default constructor
    // cout << t.a << endl;
    test t(5);
    cout << t.a << endl; // 5
    return 0;
}