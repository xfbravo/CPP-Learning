#include <iostream>
#include <stack>
using namespace std;

class MyString
{
public:
    MyString()
    {
        str = "Hello World!";
    }
    MyString(string s)
    {
        str = s;
    }
    MyString(const MyString &s)
    {
        str = s.str;
    }
    ~MyString()
    {
        cout << "Destructor called" << endl;
    }
    void print()
    {
        cout << str << endl;
    }

private:
    string str;
};

int main()
{
    stack<MyString> s;
    s.push(MyString("Hello"));
    s.push(MyString("World"));
    s.push(MyString("!"));
    s.push(MyString("This is a test"));
    s.top().print(); // This should print "This is a test"
    s.pop();
    s.top().print(); // This should print "World"
    s.pop();
    s.top().print(); // This should print "Hello"
    s.pop();
    s.top().print(); // This should print "Hello World!"
    s.pop();
    return 0;
}