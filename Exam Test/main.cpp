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

// class Point
// {
// public:
//     Point(int x = 0, int y = 0) : x(x), y(y) {}
//     double Distance(Point &p)
//     {
//         return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
//     }
//     friend double Distance(Point &p1, Point &p2);

// private:
//     int x, y;
// };

// double Distance(Point &p1, Point &p2)
// {
//     return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
// }
// int main()
// {
//     Point p, q(2, 3);
//     cout << p.Distance(q) << endl;  // 3.60555
//     cout << Distance(p, q) << endl; // 3.60555
//     return 0;
// }

// int& func(int& m){
//     m*=2;
//     return m;
// }

// int main(){
//     int a = 10;
//     int &b = a;
//     int &c=func(b);
//     a+= 5;
//     cout << "a = " << a << endl; // 15
//     cout << "b = " << b << endl; // 15
//     cout << "c = " << c << endl; // 15
//     return 0;
// }
// class MyClass
// {
// public:
//     int m_nN;
//     MyClass(int n = 0) { m_nN = n; }
// };
// int main()
// {
//     cout << MyClass(0).m_nN << ", ";
//     MyClass c1;
//     cout << c1.m_nN << ", ";
//     MyClass c2 = MyClass(2);
//     cout << c2.m_nN << ", ";
//     c1 = MyClass(3);
//     cout << c1.m_nN << ", ";
//     MyClass &rC = MyClass();
//     rC = c2;
//     c2 = c1;
//     cout << rC.m_nN << endl;
//     return 0;
// }

// #include "iostream"
// using namespace std;
// class A
// {
// public:
//     void a() { cout << " A::a()" << endl; }
// };
// class B : virtual public A
// {
// public:
//     void a()
//     {
//         cout << " B::a()" << endl;
//     }
// };
// class C : virtual public A, public B
// {
// public:
//     void g() { a(); };
// };
// int main()
// {
//     int i = 100;
//     int& j = i;
//     cout<<&i<<endl;
//     cout<<&j<<"_"<<j<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     void play() { cout << "A::play, "; }
// };
// class Derived : public Base
// {
// public:
//     void play() { cout << "B::play, "; }
// };
// void tune(Base &obj) { obj.play(); }
// int main()
// {
//     Derived flute1;
//     tune(flute1);
//     Base flute2;
//     tune(flute2);
//     return 0;
// }

// class A
// {
//     int i;

// public:
//     A() { cout << 'A'; }
//     virtual void f() { cout << "FA"; };
// };
// class B : virtual public A
// {
//     int i;

// public:
//     B() { cout << 'B'; }
//     void f() { cout << "FB"; };
// };
// class C : virtual public A
// {
//     int i;

// public:
//     C() { cout << 'C'; }
//     void f() { cout << "FC"; };
// };
// class D : public B, public C
// {
//     int i;

// public:
//     D() { cout << 'D'; }
//     void f() { cout << "FD"; };
// };
// int main()
// {
//     D *p = new D();
//     A *q = p;
//     q->f();
//     delete p;
//     return 0;
// }

// class Compute
// {
// private:
//     int value;

// public:
//     Compute(int a = 0)
//     {
//         value = a;
//         cout << "constructor is called." << endl;
//     }
//     Compute(const Compute &C)
//     {
//         value = C.value;
//         cout << "copy-constructor is called." << endl;
//     }
//     Compute &operator=(const Compute &C)
//     {
//         value = C.value;
//         cout << "assignment is called." << endl;
//         return *this;
//     }
//     operator int()
//     {
//         cout << "operator int() is called." << endl;
//         return value;
//     }
//     ~Compute() { cout << "destructor is called. value = " << value << endl; }
//     friend const Compute operator-(const Compute &C1, const Compute &C2);
// };
// const Compute operator-(const Compute &C1, const Compute &C2)
// {
//     cout << "operator-() is called." << endl;
//     return Compute(C1.value - C2.value);
// }
// int main()
// {
//     Compute m(5), n = m;
//     m = m - n;
//     int result = m;
//     cout << "result = " << result << endl;
//     return 0;
// }
/*
constructor is called
copy constructor is called
operator-() is called
constructor is called      operator-()中创建了一个临时对象Compute并返回，赋值之后被销毁
assignment is called
destructor is called. value = 0
operator int() is called
result = 0
destructor is called. value=5
destructor is called. value=0*/

// class Myclass
// {
// private:
//     const int length;
//     static int num;

// public:
//     Myclass(int r = 0) : length(r)
//     {
//         num++;
//         cout << "length = " << length << ", num = " << num << endl;
//     }
//     int GetLength() { return num * length; }
//     ~Myclass()
//     {
//         num--;
//         cout << "length = " << length << ", num = " << num << endl;
//     }
// };

// int Myclass::num = 3;

// int main()
// {
//     Myclass S1(3), &S2 = S1, *S3 = new Myclass[2];
//     cout << "The length is " << S1.GetLength() << endl;
//     delete[] S3;
//     cout << "The length is " << S1.GetLength() << endl;
//     return 0;
// }
/*
length = 3,num = 4
length = 0,num = 5
length = 0,num = 6
The length is 18
length = 0,num = 5
length = 0,num = 4
The length is 12
length = 3,num = 3*/
// class Instrument
// {
// public:
//     virtual void play() const { cout << "Instrument::play" << endl; }
//     virtual char *what() const { return "Instrument"; }
// };
// class Wind : public Instrument
// {
// public:
//     void play() const { cout << "Wind::play" << endl; }
//     char *what() const { return "Wind"; }
// };

// class Brass : public Wind
// {
// public:
//     char *what() const { return "Brass"; }
// };

// void tune(Instrument &i) { i.play(); }

// int main()
// {
//     Wind flute;
//     Brass horn;
//     tune(flute);
//     tune(horn);
//     return 0;
// }
/*
Wind::play
Wind::play
*/

// template <typename T>
// class Stack
// {
// public:
//     Stack() : top(0) {}
//     void push(const T &value); // push an element to stack
//     T pop();                   // Get an element at the top of stack
// private:
//     T stack[10];
//     int top;
// };
// template <typename T>
// void Stack<T>::push(const T& value) { stack[top++] = value; } // push an element to stack
// template <typename T>
// T Stack<T>::pop(){ return stack[--top]; }  // Get an element at the top of stack

// int main()
// {
//     Stack<int> is;
//     for (int i = 0; i < 5; i++)
//         is.push(i * 2);
//     for (int k = 0; k < 5; k++)
//         cout << is.pop() << ",";
//     cout << endl;
//     Stack<double> ds;
//     for (int i = 0; i < 5; i++)
//         ds.push(i * 0.5);
//     for (int k = 0; k < 5; k++)
//         cout << ds.pop() << ",";
//     return 0;
// }

// #include "iostream"
// using namespace std;

// class CRectangle
// {
// public:
//     int area() { return 4; }
// };
// class CSquare : virtual public CRectangle
// {
// public:
//     int area() { return 8; }
// };
// class CDiamond : virtual public CSquare
// {
// public:
//     int area() { return 16; };
// };
// int main(void)
// {
//     CSquare sq;
//     CDiamond dia;
//     cout << sq.area() << endl;
//     CRectangle &rc = sq;
//     rc = sq;
//     cout << rc.area() << endl;
//     rc = dia;
//     cout << rc.area() << endl;
//     return 0;
// }
/*
8
4
4*/

// #include "iostream"
// using namespace std;
// class MyClass
// {
// private:

// public:
// double m_dData;
//     MyClass(double d = 0)
//     {
//         cout << "An object is created by " << d << endl;
//         m_dData = d;
//     }
//     operator double()
//     {
//         cout << "Type-cast of double() is called." << endl;
//         return m_dData;
//     }
//     MyClass(const MyClass &m)
//     {
//         cout << "Copy constructor is called." << endl;
//         m_dData = m.m_dData;
//     }
//     MyClass &operator=(const MyClass &m)
//     {
//         cout << "Assignment operator is called." << endl;
//         m_dData = m.m_dData;
//         return *this;
//     }
//     double GetData() { return m_dData; }
//     friend MyClass operator-(double d, MyClass m);
//     friend MyClass operator+(double d, MyClass m);
// };
// MyClass operator-(double d, MyClass m)
// {
//     cout << "The friend operator \'-\' is called." << endl;
//     return MyClass(d - m.m_dData);
// }
// MyClass operator+(double d, MyClass m)
// {
//     cout << "The operator \'+\' is called." << endl;
//     return MyClass(d - m.GetData());
// }
// int main(int argc, char *argv[])
// {
//     MyClass m(3);
//     m = m-2;
//     cout << "The data member of m is  " << m.m_dData << endl;
//     return 0;
// }

// #include "iostream"
// using namespace std;
// class Embedded
// {
// private:
//     int e;

// public:
//     Embedded(int n) { e = n; }
//     int GetEmbedded() { return e; } // Display the data member value
// };
// class Base
// {
// private:
//     int b;
//     Embedded em;

// public:
//     Base(int i = 0) : em(100 * i) { b = i; }
//     friend class Drv ;
//     friend int main(int argc, char *argv[]);
// };
// class Drv1 : virtual public Base
// {
// private:
//     int d1;

// public:
//     Drv1(int i, int j) { d1 = j; }
// };
// class Drv2 : virtual public Base
// {
// private:
//     int d2;

// public:
//     Drv2(int i, int j) { d2 = j; }
// };
// class Drv : virtual public Drv1, virtual public Drv2
// {
// private:
//     int d;

// public:
//     Drv(int i, int j, int k, int l) : Base(i), Drv1(i, j), Drv2(i, k)
//     {
//         d = l;
//     }
//     Embedded &GetEmbedded() { return Base::em; }
// };
// int main(int argc, char *argv[])
// {
//     Drv obj(1, 2, 3, 4);
//     obj.Drv1::b = 11;
//     obj.Drv2::b = 21;
//     cout << obj.GetEmbedded().GetEmbedded() << endl;
//     // This wants to display the data member value of the
//     // embedded objct   Base::em
//     cout << obj.Drv1::b << endl;
//     cout << obj.Drv2::b << endl;
//     return 0;
// }

/*
100
21
21
*/

// #include "iostream"
// using namespace std;
// class MyComplex
// {
// private:
//     double m_dR;
//     double m_dI;

// public:
//     template <class T>
//     MyComplex(T r = 0, T i = 0)
//     {
//         m_dR = r;
//         m_dI = i;
//         cout << "constructor" << endl;
//     }
//     operator double()
//     {
//         cout << "type cast" << endl;
//         return m_dR;
//     }
//     friend ostream &operator<<(ostream &os, MyComplex c);
// };
// ostream &operator<<(ostream &os, MyComplex c)
// {
//     os << c.m_dR << " + i" << c.m_dI << endl;
//     return os;
// }
// int main()
// {
//     MyComplex c1(1.0, 2.0);
//     c1 = c1 + 1;
//     cout << c1;
//     return 0;
// }

// class Point
// {
// private:
//     double m_dX;
//     double m_dY;

// public:
//     Point(double x = 0, double y = 0) : m_dX(x), m_dY(y) {}
//     // Above blank is a constructor with default argument values
// };
// class Bottom
// {
// protected:
//     double m_BttmLen;
//     double m_Height;
//     Point m_Pos;

// public:
//     Bottom(double x = 0, double y = 0, double l = 0, double h = 0)
//         : m_Pos(x, y)
//     {
//         m_BttmLen = l;
//         m_Height = h;
//     }
//     virtual double Area() = 0;   // Here is a pure function
//     virtual double Volume() = 0; // Here is a pure function
// };
// class Circle : virtual public Bottom
// {
// private:
//     double m_dRadius;

// public:
//     Circle(double x = 0, double y = 0, double r = 0) { m_dRadius = r; }
//     virtual double Area() { return 3.14 * m_dRadius * m_dRadius; } // Returns the area
//     virtual double Volume() { return 0; }
// };
// class Rect : virtual public Bottom
// {
// public:
//     Rect(double x, double y, double BttmLen, double Height)
//         : Bottom(x, y, BttmLen, Height) {}
//     virtual double Area() { return m_BttmLen * m_Height; } // Returns the area
//     virtual double Volume() { return 0; }
// };
// class Triangle : virtual public Bottom
// {
// public:
//     Triangle(double x, double y, double l, double h)
//         : Bottom(x, y, l, h) {}
//     virtual double Area() { return 0.5 * m_BttmLen * m_Height; }
//     virtual double Volume() { return 0; }
// };
// template <class BTYPE>
// class Cylinder : public virtual BTYPE
// {
// private:
//     double m_bHeight;

// public:
//     Cylinder(double x, double y, double BL, double bH, double h)
//         : BTYPE(x, y, BL, bH), Bottom(x, y, BL, bH) { m_bHeight = h; }
//     Cylinder(double x, double y, double h, double r)
//         : Circle(x, y, r), Bottom(x, y, 0, 0) { m_bHeight = h; }
//     double Volume() { return m_bHeight * BTYPE::Area(); } // Returns the volume
// };

// int main(int argc, char *argv[])
// {
//     Bottom *pBttm;
//     Cylinder<Circle> Clndr1(1, 2, 3, 4);      // Clndr1 is a cylinder with a circular bottom
//     Cylinder<Triangle> Clndr2(1, 2, 3, 4, 5); // Clndr2 is a cylinder with a triangular bottom
//     Cylinder<Rect> Clndr3(1, 2, 3, 4, 5);     // Clndr3 is a cylinder with a rectangular bottom
//     pBttm = &Clndr1; // pBttm points to Clndr1
//     cout << pBttm->Area() << endl; // prints the area of Clndr1
//     pBttm = &Clndr2; // pBttm points to Clndr2
//     cout << pBttm->Area() << endl; // prints the area of Clndr2
//     pBttm = &Clndr3; // pBttm points to Clndr3
//     cout << pBttm->Area() << endl; // prints the area of Clndr3
//     return 0;
// }

// template <typename Type>
// class MyStack
// {
// private:
//     Type *m_stack;
//     int MaxItemNum;

// public:
//     int top = -1;
//     MyStack(int n = 10)
//     {
//         MaxItemNum = n;
//         m_stack = new Type[MaxItemNum];
//     }
//     ~MyStack()
//     {
//         delete[] m_stack;
//     }
//     int Push(const Type &item)
//     {
//         if (top == MaxItemNum - 1)
//         {
//             cout << "Stack is full." << endl;
//             return top;
//         }
//         m_stack[++top] = item;
//         return top;
//     }
//     Type Pop()
//     {
//         if (top == -1)
//         {
//             throw "Stack is empty.";
//         }
//         return m_stack[top--];
//     }
//     void CleanUp()
//     {
//         delete[] m_stack;
//         top = -1;
//     }
//     bool sEmpty()
//     {
//         return top == -1;
//     }
// };

// int main()
// {
//     MyStack<char> ms(20);
//     string str = "Hello World!";
//     for (int i = 0; i < str.length(); i++)
//     {
//         ms.Push(str[i]);
//     }
//     while (!ms.sEmpty())
//     {
//         cout << ms.Pop();
//     }
//     return 0;
// }

class Shape
{
public:
    virtual double Area() = 0;
    virtual double Perimeter() = 0;
};

class Point
{
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0) : x(x), y(y) {}
};

class Circle : public Shape
{
private:
    double radius;
    Point P;

public:
    Circle(Point p, double r) : P(p), radius(r) {}
    double Area()
    {
        return 3.14 * radius * radius;
    }
    double Perimeter()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    Point A(5.8, 4.1);
    Shape *pS = new Circle(A, 3);
    cout << pS->Area() << endl;
    cout << pS->Perimeter() << endl;
    delete pS;
    return 0;
}