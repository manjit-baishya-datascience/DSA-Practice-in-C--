#include<iostream>
using namespace std;

int twice(int arr[], int size){
    for(int i = 0; i< size; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int arr[] = {5, 7, 2, 4, 8};

    twice(arr, 5);

    for(int i = 0; i< 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}