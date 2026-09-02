#include<iostream>
using namespace std;

int main(){
    int num, pro = 1;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        pro = pro * i;
    }

    cout << "Factorial of " <<  num << " is: " << pro << endl;
    return 0;
}