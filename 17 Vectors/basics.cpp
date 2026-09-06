#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // vector <int> vec (5,6);

    vector <int> vec = {3,4,6,8,2};

    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    for(int val : vec){
        cout << val << endl; 
    }

    return 0;
}