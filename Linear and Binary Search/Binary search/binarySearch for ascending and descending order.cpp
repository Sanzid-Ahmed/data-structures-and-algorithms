#include <iostream>
using namespace std;


int main(){
    int size;
    cout << "Enter the size of the array => " << endl;
    cin >> size;


    int arr[size];
    cout << "Enter the elements of the array => ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the target number: " << endl;
    int target;
    cin >> target;


    cout << "\nOption = 1 for ascending order, and \nOption = 2 for descending order: " << endl;
    int num;
    cin >> num;


        int start = 0;
        int end = size - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(arr[mid] == target){
                cout << mid;
                break;
            }


            if(num == 1){
                if(arr[mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
            else{
                if(arr[mid] < target){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
        }

        if(start > end){
            cout << "The number not found";
        }

        return 0;
}
