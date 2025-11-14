#include <iostream>
using namespace std;


void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

}

int main(){
    int arr[] = {5, 1, 99, 77, 55};
    int size = sizeof(arr)/ sizeof(arr[0]);


    bubbleSort(arr, size);

    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}
