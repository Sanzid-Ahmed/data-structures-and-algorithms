#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;

        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[] = {2, 22, 105, 100, 555, 55};
    int size = sizeof(arr) / sizeof(arr[0]);


    selectionSort(arr, size);
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}
