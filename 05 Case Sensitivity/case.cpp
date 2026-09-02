#include <iostream>
using namespace std;

int main(){
    char c;

    cout << "Please enter a character: ";
    cin >> c;

    if(c >= 65 && c <= 90){
        cout << "UPPER CASE!";
    } else if (c >= 97 && c <= 122){
        cout << "LOWER CASE!";
    } else {
        cout << "INVALID!";
    }

    return 0;
}