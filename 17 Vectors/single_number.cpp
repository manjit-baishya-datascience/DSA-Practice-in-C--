#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {2,8,2,7,8,3,3};

    int ans = 0;
    for(int num: nums){
        ans = ans ^ num;
    }

    cout << ans;

    return 0;
}