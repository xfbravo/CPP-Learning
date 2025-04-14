#include <iostream>
#include "sort.h"
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    double arr2[] = {64.5, 34.2, 25.1, 12.3, 22.4, 11.6, 90.7};
    char arr3[] = {'g', 'e', 'f', 'd', 'c', 'b', 'a'};

    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    bubbleSort(arr, n1);
    cout << "Sorted int array: ";
    for (int i = 0; i < n1; i++)
        cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr2, n2);
    cout << "Sorted double array: ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    cout << endl;

    bubbleSort(arr3, n3);
    cout << "Sorted char array: ";
    for (int i = 0; i < n3; i++)
        cout << arr3[i] << " ";
    cout << endl;

    return 0;
}