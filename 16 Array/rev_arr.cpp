#include<iostream>
using namespace std;

int revArray(int arr[], int size){
    int start = 0; int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {23,659,8,2};

    int size = sizeof(arr)/sizeof(int);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    revArray(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}