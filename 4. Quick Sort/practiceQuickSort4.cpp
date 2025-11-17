#include <iostream>
using namespace std;



int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int pivotIndex = start - 1;

    for(int i = start; i < end; i++){
        if(arr[i] < pivot){
            pivotIndex++;
            swap(arr[pivotIndex], arr[i]);
        }
    }

    swap(arr[pivotIndex + 1], arr[end]);
    return pivotIndex + 1;
}


void quickSort(int arr[], int start, int end){
    if(start < end){
        int pivotIndex = partition(arr, start, end);

        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}


int main(){
    int arr[] = {2, 55, 120, 555, 305, 22, 25};
    int size = sizeof(arr) / sizeof(arr[0]);


    quickSort(arr, 0, size - 1);
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}
