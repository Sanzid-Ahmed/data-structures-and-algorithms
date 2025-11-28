#include <iostream>
using namespace std;



void merge(int arr[], int start, int mid, int end){
    int mid1 = mid - start + 1;
    int mid2 = end - mid;


    int left[mid1];
    int right[mid2];


    for(int i = 0 ;i < mid1; i++)
        left[i] = arr[start + i];
    for(int i = 0; i < mid2; i++)
        right[i] = arr[mid + 1 + i];


    int i = 0, j = 0, k = start;
    while(i < mid1 && j < mid2){
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }


    while(i < mid1)
        arr[k++] = left[i++];
    while(j < mid2)
        arr[k++] = right[j++];
}




void mergeSort(int arr[], int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2;


        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);


        merge(arr, start, mid, end);
    }
}


int main(){
    int arr[] = {5, 11, 105, 22, 555};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}
