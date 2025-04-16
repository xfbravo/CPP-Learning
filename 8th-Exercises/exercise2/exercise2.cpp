#include <iostream>

using namespace std;
//标准库中已经有了swap函数，所以不需要自己实现
// template <typename T>
// void mySwap(T &a, T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }

template <typename T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false; // to check if array is already sorted
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        { // if no two elements were swapped in the inner loop, then break
            break;
        }
    }
}

template <typename T>
void printArray(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[] = {64, 34, 25, 11, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    char arr2[] = {'g', 'e', 'e', 'k', 's', 'a', 'b', 'y', 't'};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    double arr3[] = {64.5, 34.2, 25.1, 11.9, 22.8, 11.7, 90.6, 90.5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Unsorted array1: ";
    printArray(arr1, n1);
    bubbleSort(arr1, n1);
    cout << "Sorted array1: ";
    printArray(arr1, n1);
    cout << "Unsorted array2: ";
    printArray(arr2, n2);
    bubbleSort(arr2, n2);
    cout << "Sorted array2: ";
    printArray(arr2, n2);
    cout << "Unsorted array3: ";
    printArray(arr3, n3);
    bubbleSort(arr3, n3);
    cout << "Sorted array3: ";
    printArray(arr3, n3);
    return 0;
}