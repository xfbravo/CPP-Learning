#include <iostream>
#include <vector>
using namespace std;

// First test class
class Obj {
    static int i, j;

public:
    void f() { cout << "Obj::f(): " << i++ << endl; }
    void g() { cout << "Obj::g(): " << j++ << endl; }
};
// Static member definitions:
int Obj::i = 47;
int Obj::j = 11;

// Second test class
class AnotherObj {
    static int x, y;

public:
    void f() { cout << "AnotherObj::f(): " << x++ << endl; }
    void g() { cout << "AnotherObj::g(): " << y++ << endl; }
};
// Static member definitions:
int AnotherObj::x = 100;
int AnotherObj::y = 200;

// Templatized Container
template <class T>
class ObjContainer {
    vector<T*> a; // Vector to store pointers to objects

public:
    void add(T* obj) { a.push_back(obj); }

    class SmartPointer {
        ObjContainer& oc;
        unsigned int index;

    public:
        SmartPointer(ObjContainer& objc) : oc(objc), index(0) {}

        // Return value indicates end of list:
        bool operator++() { // Prefix
            if (index >= oc.a.size() - 1)
                return false;
            index++;
            return true;
        }
        bool operator++(int) { // Postfix
            return operator++(); // Use prefix version
        }
        T* operator->() const {
            if (index >= oc.a.size() || oc.a[index] == nullptr) {
                throw runtime_error("SmartPointer out of bounds or null pointer");
            }
            return oc.a[index];
        }
    };

    // Function to produce a smart pointer that points to the beginning of the ObjContainer:
    SmartPointer begin() { return SmartPointer(*this); }
};

int main() {
    const int sz = 5;

    // Test with Obj
    Obj o[sz];
    ObjContainer<Obj> oc;
    for (int i = 0; i < sz; i++)
        oc.add(&o[i]); // Fill it up
    ObjContainer<Obj>::SmartPointer sp = oc.begin();
    do {
        sp->f(); // Pointer dereference operator call
        sp->g();
    } while (++sp);

    cout << "------------------------" << endl;

    // Test with AnotherObj
    AnotherObj ao[sz];
    ObjContainer<AnotherObj> aoc;
    for (int i = 0; i < sz; i++)
        aoc.add(&ao[i]); // Fill it up
    ObjContainer<AnotherObj>::SmartPointer asp = aoc.begin();
    do {
        asp->f(); // Pointer dereference operator call
        asp->g();
    } while (++asp);

    return 0;
}