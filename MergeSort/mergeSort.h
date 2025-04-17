#ifndef __MERGESORT_H__
#define __MERGESORT_H__
#include <iostream>
template <typename T>
void merge(T arr[], int left, int mid, int right)
{
    int n = right - left + 1; // Calculate the size of the merged array
    T temp[n];                // Temporary array to store merged elements
    int i = left;             // Index for left subarray
    int j = mid + 1;          // Index for right subarray
    int k = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++]; // Copy smaller element to temp array
        }
        else
        {
            temp[k++] = arr[j++]; // Copy smaller element to temp array
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++]; // Copy remaining elements from left subarray
    }
    while (j <= right)
    {
        temp[k++] = arr[j++]; // Copy remaining elements from right subarray
    }
    for (int k = left; k <= right; k++)
    {
        arr[k] = temp[k - left]; // Copy merged elements back to original array
    }
}

template <typename T>
void mergeSort(T arr[], int left, int right)
{
    if (left < right)
    {                                        // Base case: if the array has more than one element
        int mid = left + (right - left) / 2; // Find the middle point
        mergeSort(arr, left, mid);           // Sort first half
        mergeSort(arr, mid + 1, right);      // Sort second half
        merge(arr, left, mid, right);        // Merge the sorted halves
    }
}
#endif // __MERGESORT_H__