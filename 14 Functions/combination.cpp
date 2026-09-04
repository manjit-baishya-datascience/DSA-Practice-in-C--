#include<iostream>
using namespace std;

int factorial(int num){
    int pro = 1;
    
    for(int i = num; i>= 1; i--){
        pro = pro * i;
    }

    return pro;
}

int main(){
    int n = 12, r = 4;

    cout << factorial(n)/(factorial(r) * factorial(n - r));
}