#include <bits/stdc++.h>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int idx = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[high], arr[idx]);  // Place pivot in correct position
    return idx;                 
}

// QuickSort function
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);   // Left of pivot
        quicksort(arr, pivotIndex + 1, high);  // Right of pivot
    }
}

// Print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
