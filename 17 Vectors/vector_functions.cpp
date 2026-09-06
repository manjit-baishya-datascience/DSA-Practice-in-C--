#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {7,34,6,85,5};
    
    // print all values
    cout << "Vector contains :";
    for(int val : vec){
        cout << val << " ";
    }

    cout << endl;
    cout << "--------------------------------------"<< endl;

    // vec.size() <- gives the size of the vector
    cout << "Size of vector: " << vec.size() << endl;

    // push_back() <- add a value at the end of the vector
    vec.push_back(51);
    
    cout << "Size of vector after push_back: " << vec.size() << endl;
    
    cout << "Vector contains :";
    for(int val : vec){
        cout << val << " ";
    }

    cout << endl;
    cout << "--------------------------------------"<< endl;

    // pop_back() <- removes the last value of the vector
    vec.pop_back();
    
    cout << "Size of vector after pop_back: " << vec.size() << endl;
    
    cout << "Vector contains :";
    for(int val : vec){
        cout << val << " ";
    }

    cout << endl;
    cout << "--------------------------------------"<< endl;

    // front() <- prints the first element of the vector
    cout << "First element: " << vec.front() << endl;

    // back() <- prints the last element of the vector
    cout << "Last element: " << vec.back() << endl;

    // at() <- prints the element at that specific index
    int idx = 3;
    cout << "Element at index: " << idx << " is: " << vec.at(idx) << endl;
}