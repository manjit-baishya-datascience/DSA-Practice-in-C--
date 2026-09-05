#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 57, 3, 2, 4};

    int size = sizeof(arr)/sizeof(int);
    cout << "Size: " << size << endl;

    int rev_arr[size];

    for(int i = 0; i < size; i++){
        rev_arr[i] = arr[size - i - 1];
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < size; i++){
        cout << rev_arr[i] << " ";
    }
   
    return 0;
}