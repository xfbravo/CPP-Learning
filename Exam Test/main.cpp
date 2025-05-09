#include <iostream>
#include <cmath>
using namespace std;

// class Sample
// {
// public:
//     Sample()
//     {
//         cout << "Default Constructor is called" << endl;
//     }
//     Sample(const Sample &S)
//     {
//         cout << "Copy Constructo is called" << endl;
//     }
//     ~Sample()
//     {
//         cout << "Destructor is called" << endl;
//     }
// };

// Sample Fun()
// {
//     Sample S;
//     return S;
// }
// int main()
// {
//     Sample S = Fun();
//     return 0;
// }

// class Function
// {
// public:
//     Function(int a, int b)
//     {
//         cout << "Constructor is called.";
//         A = a;
//         B = b;
//     }
//     int operator()(int x, int y)
//     {
//         cout << "operator is called.";
//         return A * x + B * y;
//     }

//     operator int()
//     {
//         cout << "int is called.";
//         return 2 + (*this)(2, 5);
//     }
//     int f(int x, int y)
//     {
//         return A * (x + y) + B;
//     }

// private:
//     int A;
//     int B;
// };

// int main()
// {
//     Function f(2, 5);
//     int i = f;
//     cout << "i = " << i << endl;
//     cout << "f(2, 5) = " << f(2, 5) << endl;
//     return 0;
// }
/*
Constructor is called
int is called
operator is called
i=31
operator is called
f(2, 5) = 29
*/

class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    double Distance(Point &p)
    {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
    friend double Distance(Point &p1, Point &p2);

private:
    int x, y;
};

double Distance(Point &p1, Point &p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
int main()
{
    Point p, q(2, 3);
    cout << p.Distance(q) << endl;  // 3.60555
    cout << Distance(p, q) << endl; // 3.60555
    return 0;
}