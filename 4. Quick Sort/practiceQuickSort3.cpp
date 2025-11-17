#include <iostream>
using namespace std;




int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int pivotIndex = low - 1;

    for(int i = low; i < high; i++){
        if(arr[i] < pivot){
            pivotIndex++;
            swap(arr[pivotIndex], arr[i]);
        }
    }

    swap(arr[pivotIndex + 1], arr[high]);
    return pivotIndex + 1;
}


void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}





int main(){
    int arr[] = {5, 11, 55, 6, 101, 505, 120};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    for(int i : arr){
        cout << i << " ";
    }


    return 0;
}
