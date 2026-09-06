#include<iostream>
#include<vector>
using namespace std;

int lin_src(vector <int>& nums, int target){
    for(int i = 0; i< nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){

    // declaring vector
    vector <int> nums = {8,94,2,6,30,8,9,1,6,4};

    cout << lin_src(nums, 6);

    return 0;
}