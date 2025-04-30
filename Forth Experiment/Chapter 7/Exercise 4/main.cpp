#include <iostream>

using namespace std;

class Test
{
public:
    // void test()
    // {
    //     cout << "this is test1 taking no arguments" << endl;
    // }
    // void test(int a)
    // {
    //     cout << "this is test2 taking 1 argument" << endl;
    // }
    // void test(int a, int b)
    // {
    //     cout << "this is test3 taking 2 arguments" << endl;
    // }
    // void test(int a, int b, int c)
    // {
    //     cout << "this is test4 taking 3 arguments" << endl;
    // }
    void test(int a=0,int b=0,int c=0){
        cout << "this is intergrated test" << endl;
    }
};

int main()
{
    Test t;
    t.test();
    t.test(1);
    t.test(1, 2);
    t.test(1, 2, 3);
    return 0;
}