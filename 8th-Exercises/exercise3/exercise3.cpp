#include <iostream>

using namespace std;
template <typename T>
class List; // Forward declaration of List class

template <typename T>
class List
{ // List class definition
public:
    T data;
    List *next;
    List() : data(T()), next(nullptr) {}          // default constructor
    List(T value) : data(value), next(nullptr) {} // parameterized constructor
    void insert(T value)
    {
        List *newNode = new List(value);
        if (!next)
        {
            next = newNode;
        }
        else
        {
            List *temp = next;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void print()
    {
        List *temp = this->next; // Start from the first node
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    List<int> myList;
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);
    myList.insert(5);
    myList.print();
    return 0;
}
