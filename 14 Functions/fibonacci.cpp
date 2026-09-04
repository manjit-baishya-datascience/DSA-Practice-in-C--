#include<iostream>
using namespace std;

int get_sum(int num, int last){
    return num + last;
}

int main(){
    int num = 4, sum = 0;

    for(int  i = 0; i <= num; i++){
        sum = get_sum(i, sum);
    }

    cout << sum << endl;

    return 0;
}