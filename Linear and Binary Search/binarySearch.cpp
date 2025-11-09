#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;

    while(low <= high){
    mid = (low + high) / 2;
    if(arr[mid] == element)
        return mid;
    if(arr[mid] < element)
        low = mid + 1;
    else
        low = mid - 1;
    }
    return -1;
}


int main(){

    int size;
    cout << "Enter the size of the array => ";
    cin >> size;

    cout << "Enter the elements of the array => " << endl;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int n;
    cout << "Enter the targeted number => ";
    cin >> n;

    int result = binarySearch(arr, size, n);

    if(result != -1)cout << "index number is => " << result << endl;else cout << "Your targeted number not founded" << endl;

    return 0;
}
