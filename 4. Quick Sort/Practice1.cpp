#include <iostream>
using namespace std;



int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int pivotIndex = start - 1;

    for(int i = start; i < end; i++){
        if(arr[i] <= pivot){
                //compare pivot value not pivot index
            pivotIndex++;
            swap(arr[pivotIndex], arr[i]);
        }
    }


    //swap(arr[end], arr[pivotIndex++]);
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
    int size;
    cout << "Enter the size of the array => ";
    cin >> size;


    int arr[size];
    cout << "Enter the elements of the array => ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }


    cout << "Array before sort => ";
    for(int i : arr){
        cout << i << endl;
    }

    quickSort(arr, 0, size - 1);

    cout << "Array after sorting\n\n" << endl;
    for(int i : arr){
        cout << i << endl;
    }
}
