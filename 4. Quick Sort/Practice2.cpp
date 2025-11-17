#include <iostream>
using namespace std;


int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int pivotIndex = start - 1;

    for(int i = start; i < end; i++){
        if(arr[i] <= pivot){
            pivotIndex++;
            swap(arr[pivotIndex], arr[i]);
        }
    }

    swap(arr[end], arr[++pivotIndex]);
    return pivotIndex;
}


void quickSort(int arr[], int start, int end){
    if(start < end){
        int pivotIndex = partition(arr, start, end);

        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}


int main(){
    int arr[] = {12, 31, 35, 8, 32, 17};
    int arraySize = sizeof(arr)/ sizeof(arr[0]);
    quickSort(arr, 0, arraySize - 1);


    for(int i : arr){
        cout << i << endl;
    }

    return 0;
}
