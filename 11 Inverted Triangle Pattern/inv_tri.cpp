#include<iostream>
using namespace std;

int main(){
    int num = 5;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i - 1; j++){
            cout << " ";
        }

        for(int k = num - i; k >= 1; k--){
            cout << k;
        }
        cout << endl;
    }
    
    return 0;
}