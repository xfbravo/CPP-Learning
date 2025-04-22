#include <iostream>
#include <string.h>

using namespace std;

class Test
{
public:
    const char *str = "Hello, World!"; // Declare a constant character pointer
    const int num = 0;
    const int *p = &num;
    int b = 2;
    int a = 1;
    int add() const
    { // const修饰的成员函数，不能修改成员变量
        return a;
    }
    int minus()
    {
        a -= 1;
        return a;
    }
};
// int main() {
//     const char str[]="Hello, World!"; // Declare a constant character array
//     char str2[] = "world,hello";
//     // char *p1 = str;// error:Declare a modifiable pointer to a const character array
//     str2[0] = 'W'; // Modify the first character of str2
//     const char* p2=str; // Declare a constant pointer to a character array
//     // p2[0] = 'h'; // Error: cannot modify a constant array
//     char *p3 = str2;
//     const char* p4 = str2; // Declare a constant pointer to a character array
//     const char *const p5 = str;
//     cout<<str<<endl; // Print the constant character array
//     cout<<str2<<endl; // Print the modified character array
//     return 0;
// }
int main(int argc, char const *argv[])
{
    Test t;
    t.add();
    cout << t.a << endl;
    const Test t2;
    t2.add();
    // t2.minus();// Error: t2的类型为const Test，不能调用非const成员函数
    cout << t2.a << endl;
    return 0;
}
