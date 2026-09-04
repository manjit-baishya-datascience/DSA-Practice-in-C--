#include<iostream>
using namespace std;

int sum_of_digits(int num){
    int sum = 0; 
    
    while(num > 0){
        sum = sum + (num % 10);
        num = num / 10;
    }
    
    return sum;
}

int main(){
    int num = 1234;
    cout << sum_of_digits(num);
}