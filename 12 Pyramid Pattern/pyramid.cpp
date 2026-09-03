#include<iostream>
using namespace std;

int main(){
    int num = 4;

    for(int i = 1; i<= num; i++){
        for(int j = num - i; j > 0; j--){
            cout << "_";
        }

        for(int k = 1; k <= i; k++){
            cout << k;
        }

        for(int l = i - 1; l >= 1; l--){
            cout << l;
        }

        cout << endl;
    }

    return 0;
}