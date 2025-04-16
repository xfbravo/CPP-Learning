#include <iostream>

using namespace std;

template <typename T>
class MyArray
{
public:
    T *arr;   // pointer to the array
    int size; // size of the array
    // constructor to initialize the array
    MyArray(int size)
    {
        this->size = size;
        arr = new T[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    // destructor to delete the array
    ~MyArray()
    {
        delete[] arr;
    }
    // operator overloading to access the array elements
    T &operator[](int index)
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
    // operator overloading to print the array elements
    friend ostream &operator<<(ostream &os, const MyArray &myArray)
    {
        for (int i = 0; i < myArray.size - 1; i++)
        {
            os << myArray.arr[i] << ",";
        }
        os << myArray.arr[myArray.size - 1] << endl;
        return os;
    }
};

int main()
{
    MyArray<int> intArray(10);
    for (int i = 0; i < 10; i++)
    {
        intArray[i] = i * i;
        cout << intArray;
    }
    return 0;
}