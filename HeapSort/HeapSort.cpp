#include <iostream>
#include "HeapSort.h" // Include the header file for heap sort
using namespace std;

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6, 2, 11, 98, 46}; // Example array to sort
    int size = sizeof(arr) / sizeof(arr[0]);       // Calculate the size of the array
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // Print original array
    }
    cout << endl;
    HeapSort(arr, size); // Call HeapSort function
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // Print sorted array
    }
    cout << endl;
    return 0; // Return 0 to indicate successful execution
}