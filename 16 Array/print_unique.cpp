#include<iostream>
using namespace std;

bool unique(int arr[], int size, int target, int start){
    for(int i = start; i<size; i++){
        if(target == arr[i]){
            return false;
        }
    }

    return true;
}

int main(){
    int arr[] = {85,80,6,3,57,2,0,5,7,0,6,235,7,68,9,37,0,635,6,8,73,5,0,96,7,8,5,3};

    int size = sizeof(arr)/sizeof(int);

    for(int i = 0; i<size; i++){
        if(unique(arr, size, arr[i], i + 1) == true){
            cout << arr[i] << " ";
        }
    }

    return 0;
}