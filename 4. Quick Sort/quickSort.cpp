#include <iostream>
using namespace std;

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot = last element
    int idx = low - 1;     // smaller element index

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    swap(arr[high], arr[idx + 1]);
    return idx + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivIndex = partition(arr, low, high);

        quickSort(arr, low, pivIndex - 1);
        quickSort(arr, pivIndex + 1, high);
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nArray before sorting: ";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "Array after sorting: ";
    printArray(arr, size);

    return 0;
}
