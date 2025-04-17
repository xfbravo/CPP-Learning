#ifndef __HEAPSORT_H__
#define __HEAPSORT_H__

#include <iostream>
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp; // Swap two elements
}

template <typename T>
void heapify(T arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index
    if (left < n && arr[left] > arr[largest])
    {
        largest = left; // Update largest if left child is larger
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right; // Update largest if right child is larger
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Recursively heapify the affected sub-tree
    }
}

template <typename T>
void HeapSort(T arr[], int n)
{
    int start = (n / 2) - 1; // Start from the last non-leaf node
    for (int i = start; i >= 0; i--)
    {
        heapify(arr, n, i); // Build the heap
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]); // Move the current root to the end
        heapify(arr, i, 0);   // Heapify the reduced heap
    }
}

#endif // __HEAPSORT_H__