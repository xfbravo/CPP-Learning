#include <iostream>

using namespace std;

int main()
{
    cout << sizeof(int) << endl;            // 4
    cout << sizeof(char) << endl;           // 1
    cout << sizeof(float) << endl;          // 4
    cout << sizeof(double) << endl;         // 8
    cout << sizeof(bool) << endl;           // 1
    cout << sizeof(long) << endl;           // 8
    cout << sizeof(short) << endl;          // 2
    cout << sizeof(long long) << endl;      // 8
    cout << sizeof(long double) << endl;    // 16
    cout << sizeof(unsigned int) << endl;   // 4
    cout << sizeof(unsigned char) << endl;  // 1
    cout << sizeof(unsigned long) << endl;  // 8
    cout << sizeof(unsigned short) << endl; // 2
    return 0;
}