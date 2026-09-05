#include<iostream>
#include<climits>
using namespace std;

int find_max(int arr[], int size){
    int max = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int find_min(int arr[], int size){
    int min = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int arr[] = {84,-68,9,-25,7,86,-9};
    int size = sizeof(arr)/sizeof(int);

    cout <<  find_max(arr, size) << " " << find_min(arr, size);   

    return 0;
}