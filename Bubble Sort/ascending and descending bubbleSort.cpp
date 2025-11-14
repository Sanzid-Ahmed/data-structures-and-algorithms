#include <iostream>
using namespace std;


void ascendingBubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++)
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}


void descendingBubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}


int main(){
    int arr[] = {5, 55, 11, 105, 100, 66, 777, 77};
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout << "Original array => "<< endl;
    for(int i : arr){
        cout << i << " ";
    }

    cout << "\n\nArray after sorting ascending order => " << endl;
    ascendingBubbleSort(arr, size);
    for(int i : arr){
        cout << i << " ";
    }

    cout << "\n\nArray after sorting descending order => " << endl;
    descendingBubbleSort(arr, size);
    for(int i : arr){
        cout<< i << " ";
    }

    return 0;
}
