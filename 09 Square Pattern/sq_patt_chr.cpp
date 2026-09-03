#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        for(char j = 65; j <= 65 + num; j++){
            cout << j;
        }

        cout << endl;
    }
}