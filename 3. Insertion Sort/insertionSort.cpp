#include <iostream>
using namespace std;


void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;


        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}


int main(){
    int arr[] = {55, 1, 66, 156, 77, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    cout << "The sorted array is => " << endl;
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}
