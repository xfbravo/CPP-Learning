#include <iostream>
#include <sstream> // "String streams"
#include <cstring>
using namespace std;
template <typename T,size_t N>
class Array
{
    T i[N]; // Array of integers

public:
    Array() { memset(i, 0, N * sizeof(T)); }
    T &operator[](size_t x)
    {
        if(x<0 || x>=N)
        {
            cout << "Index out of bounds" << endl;
            exit(1);
        }
        return i[x];
    }
    friend ostream &operator<<(ostream &os, const Array &arr)
    {
        for (size_t j = 0; j < N; j++)
        {
            os << arr.i[j];
            if (j != N - 1)
                os << ", ";
        }
        os << endl;
        return os;
    }

    friend istream &operator>>(istream &is, Array &arr)
    {
        for (size_t j = 0; j < N; j++)
        {
            is >> arr.i[j];
        }
        return is;
    }
};
int main()
{
    // Example usage with int and size 5
    Array<int, 5> intArray;
    cout << "Enter 5 integers: ";
    cin >> intArray;
    cout << "You entered: " << intArray;

    // Example usage with double and size 3
    Array<double, 3> doubleArray;
    cout << "Enter 3 doubles: ";
    cin >> doubleArray;
    cout << "You entered: " << doubleArray;

    // Example usage with char and size 4
    Array<char, 4> charArray;
    cout << "Enter 4 characters: ";
    cin >> charArray;
    cout << "You entered: " << charArray;

    return 0;
}