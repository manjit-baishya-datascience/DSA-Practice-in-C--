#include <iostream>
using namespace std;

int main(){
    int sum=0, num=1;

    cout << "Enter the number: ";
    cin >> num;

    for (int i=1; i<=num; i++){
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << num << " is: " << sum << endl;
    return 0;
}