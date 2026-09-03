#include<iostream>
using namespace std;

int main(){
    int num = 4, count = 1;

    for(int i = 1; i <= num; i++){
        for(int j = i; j >= 1; j--){
            cout << count++;
        }

        cout << endl;
    }
}