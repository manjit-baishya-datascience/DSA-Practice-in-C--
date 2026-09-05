#include<iostream>
using namespace std;

int sum_pro_arr(int arr[], int size){
    int sum = 0, pro = 1;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
        pro = pro * arr[i];
    }
    
    cout << "Sum of array: " << sum << " and product: " << pro << endl;
}

int main(){
    int arr[] = {4, 3, 4};
    int size = sizeof(arr)/sizeof(int);

    int sum, pro;

    sum_pro_arr(arr, size);

    return 0;
}