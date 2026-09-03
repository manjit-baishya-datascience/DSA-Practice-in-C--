#include<iostream>
using namespace std;

int main(){
    int num = 4;

    for(int i = 1; i <= num; i++){
        for(int j = num - i; j > 0; j--){
            cout << "_";
        }

        cout << "*";

        for(int k = i - 1; k > 0; k--){
            cout << "_";
        }

        cout << endl;
    }
}