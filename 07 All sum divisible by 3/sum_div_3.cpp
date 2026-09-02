#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    
    for(int i =1; i<=num; i++){
        if(i%3 == 0){
            sum = sum + i;
        }
    }

    cout << "Sum of numbers from 1 to " << num << " which are divisible by 3 is: " << sum << endl;

    return 0;
}