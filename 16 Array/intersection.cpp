#include<iostream>
using namespace std;

int main(){
    // declare arrays
    int arr_1[] = {8,33,5,7,93,5,94,5,9,3,5,9,8,35,7,93,7,60};
    int arr_2[] = {64,85,95,37,57,3,95,79,5,7,46,3,37,74};

    // declare array sizes 
    int size_arr_1 = sizeof(arr_1)/sizeof(int);
    int size_arr_2 = sizeof(arr_2)/sizeof(int);

    for(int i=0; i<size_arr_1; i++){
        for(int j=0; j<size_arr_2; j++){
            if(arr_1[i] == arr_2[j]){
                cout << arr_1[i] << " ";
            }
        }
    }

    return 0;
}