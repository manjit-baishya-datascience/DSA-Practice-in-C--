#include<iostream>
using namespace std;

int main(){
    int ids[5] = {41, 664, 2579, 7, 99};

    int marks[] = {36, 48, 5, 4, 93, 57, 9, 35, 7, 9};

    int ind = 3;
    cout << "The " << ind << "rd ID is: " << ids[ind] << endl;

    ind = 4;
    cout << "The " << ind << "th user got total: " << marks[ind] << " marks" << endl;

    return 0;
}