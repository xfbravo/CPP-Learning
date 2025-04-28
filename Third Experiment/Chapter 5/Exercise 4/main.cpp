#include <iostream>

using namespace std;
class Test2;// Forward declaration of Test2 class

class Test1{
public:
    int a = 1;
    void test1(Test2 *t2);
};
class Test2{
public:
    int a = 2;
    void test2(Test1 *t1){
        cout<<t1->a<<endl; // Accessing private member 'a' of class Test1
    }
};
void Test1::test1(Test2 *t2)
{
    cout << t2->a << endl; // Accessing private member 'a' of class Test2
}
int main() {
    Test1 t1;
    Test2 t2;
    t1.test1(&t2); // Call the method of Test1 to access private member 'a' of Test2
    t2.test2(&t1); // Call the method of Test2 to access private member 'a' of Test1
    return 0;
}