#include <iostream>

using namespace std;

// class Instrument{
//     public:
//     virtual void play(){
//         cout<<"Instrument::play()"<<endl;
//     }
// };

// class Wind:public Instrument{
//     public:
//     void play(){
//         cout<<"Wind::play()"<<endl;
//     }
// };

// void tune(Instrument &i){
//     i.play();
// }

// int main() {
//     Wind w;
//     tune(w); // Calls Wind::play()
//     Instrument& i = w; // Upcasting
//     Instrument* p = &w; // Upcasting
//     i.play(); // Calls Wind::play() due to dynamic binding
//     p->play(); // Calls Wind::play() due to dynamic binding
//     return 0;
// }

// class Pet
// {
// public:
//     virtual void speak() = 0;
// };
// class Dog : public Pet
// {
// public:
//     void speak()
//     {
//         cout << "Dog::speak()" << endl;
//     }
// };
// class Cat : public Pet
// {
// public:
//     void speak()
//     {
//         cout << "Cat::speak()" << endl;
//     }
// };

// void makeSound(Pet &p)
// {
//     p.speak();
// }

// int main()
// {
//     Dog d;
//     Cat c;
//     makeSound(d); // Calls Dog::speak()
//     makeSound(c); // Calls Cat::speak()
//     return 0;
// }

class A
{
public:
    A() { cout << "A::A()" << endl; }
    virtual ~A() { cout << "A::~A()" << endl; }
};

class B : public A
{
public:
    B(int i)
    {
        buf = new char[i];
        cout << "B::B(int)" << endl;
    }
    virtual ~B()
    {
        delete[] buf;
        cout << "B::~B() called. " << endl;
    }

private:
    char *buf;
};
int main()
{
    A *a = new B(15);
    delete a;
    return 0;
}