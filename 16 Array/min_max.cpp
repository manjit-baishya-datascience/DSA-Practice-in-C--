#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {73, -602, 43, -69, 82, -43};

    int size = sizeof(nums)/sizeof(int);

    int max = INT_MIN, min = INT_MAX;

    for(int i = 1; i < size; i++){
        if (nums[i] > max){
            max = nums[i];
        }

        if(nums[i] < min){
            min = nums[i];
        }
    }

    cout << "Max in the array: " << max << endl;
    cout << "Min in the array: " << min << endl;
}