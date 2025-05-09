#include <iostream>

using namespace std;

// class Complex
// {
// public:
//     Complex(double r = 0, double i = 0) : real(r), imag(i) {}

//     friend const Complex operator+(const Complex &c1, const Complex &c2)
//     {
//         return Complex(c1.real + c2.real, c1.imag + c2.imag);
//     }

//     void display()
//     {
//         cout << real << " + " << imag << " i" << endl;
//     }

//     Complex operator-()
//     {
//         return Complex(-real, -imag);
//     }

//     Complex operator+=(const Complex &c)
//     {
//         real += c.real;
//         imag += c.imag;
//         return *this;
//     }

// private:
//     double real;
//     double imag;
// };
// int main()
// {
//     Complex c1(10, 5), c2(2, 3), c3(3, 4);
//     Complex c4 = c1 + c2;
//     Complex c5 = c4 + 1.5;
//     Complex c6 = 1.5 + c4;
//     c4.display();
//     c5.display();
//     c6.display();
//     return 0;
// }

// class A{
// public:
//     int i;
//     A(int x=0):i(x){
//         cout<<"Constructor called"<<endl;
//     }
//     A(const A &a){
//         cout<<"Copy constructor called"<<endl;
//         i=a.i;
//     }
//     ~A(){
//         cout<<"Destructor called"<<endl;
//     }
// };

// A f(){
//     A a(10);
//     return a;
// }

// int main(){
//     f();
//     cout<<"main end"<<endl;
//     return 0;
// }

// class Increase{
// public:
//     Increase(int val =0):value(val){
//         cout<<"Constructor called"<<endl;
//     }
//     void display(){
//         cout<<value<<endl;
//     }
//     Increase operator++(){
//         cout<<"++value called"<<endl;
//         ++value;
//         return *this;
//     }
//     Increase operator++(int){
//         cout<<"value++ called"<<endl;
//         int temp = value;
//         ++value;
//         return Increase(temp);
//     }
// private:
//     int value;
// };

// int main(){
//     Increase obj(10);
//     obj.display();
//     Increase obj3=obj++;
//     obj3.display();
//     Increase obj2=++obj;
//     obj2.display();
//     return 0;
// }

// class A
// {
// public:
//     int *p;
//     A(int i)
//     {
//         p = new int(i);
//     }
//     A(const A &a)
//     {
//         p = new int(*a.p);
//     }
//     A &operator=(const A &a)
//     {
//         if (this == &a)
//             return *this;
//         p = a.p;
//         return *this;
//     }
//     void display()
//     {
//         cout << p << "->" << *p << endl;
//     }
//     operator int()
//     {
//         return *p;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     A a(5);
//     A b(a);
//     A c(6), d(10);
//     d = c;
//     *c.p += 1;
//     a.display();
//     b.display();
//     c.display();
//     d.display();
//     int num = a;
//     cout << "num = " << num << endl;
//     return 0;
// }

class Date
{
public:
    Date(int d = 1, int m = 1, int y = 1900) : day(d), month(m), year(y)
    {
    }
    friend ostream &operator<<(ostream &ost, const Date &d)
    {
        ost << d.year << "-" << d.month << "-" << d.day;
        return ost;
    }
    friend istream &operator>>(istream &ist, Date &d)
    {
        cout << "Enter date in format YYYY-MM-DD: ";
        char ch;
        ist >> d.year >> ch >> d.month >> ch >> d.day;
        return ist;
    }

private:
    int day, month, year;
};

int main()
{
    Date d1(10, 12, 2023), d2;
    cout << "d1: " << d1 << endl;
    cin >> d2;
    cout << "d2: " << d2 << endl;
    return 0;
}