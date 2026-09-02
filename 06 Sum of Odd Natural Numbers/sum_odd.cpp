#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;

    cout << "Enter a number:";
    cin >> num;
    
    for(int i =1; i<=num; i++){
        if(i%2 != 0){
            sum = sum + i;
        }
    }

    cout << "Sum of odd numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}