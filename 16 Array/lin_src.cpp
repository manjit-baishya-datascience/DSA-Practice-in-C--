#include<iostream>
using namespace std;

int lin_src(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(target == arr[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {34,60,46,89,32,57,109,86,75,32,96};
    int target_1 = 86, target_2 = 66;

    int size = sizeof(arr)/sizeof(int);
    
    cout << lin_src(arr, size, target_1) << endl;
    cout << lin_src(arr, size, target_2) << endl;

    return 0;
}