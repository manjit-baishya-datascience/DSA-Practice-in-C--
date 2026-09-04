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
    
    for(int i = 2; i <= num; i++){
        if(if_prime(i) == true){
            cout << i << " ";
        }
    }

    return 0;
}