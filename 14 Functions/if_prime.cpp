#include<iostream>
using namespace std;

bool if_prime(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int num = 29;

    cout << if_prime(num) << endl;
    return 0;
}