#include<iostream>
#include<vector>
using namespace std;

int rev_vec(vector <int>& nums){
    int start = 0, end = nums.size() - 1;

    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main(){

    // declaring vector
    vector <int> nums = {1,2,3,4,5};

    rev_vec(nums);

    for(int num: nums){
        cout << num << " ";
    }

    return 0;
}