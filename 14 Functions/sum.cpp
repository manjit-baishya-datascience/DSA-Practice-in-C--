#include<iostream>
using namespace std;

int get_sum(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    int a = 8, b = 9;

    int sum = get_sum(a,b);
    cout << sum;

    return 0;
}