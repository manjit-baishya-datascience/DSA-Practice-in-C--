#include <iostream>
#include <vector>
using namespace std;

int main(){

    // create an empty vector
    vector <int> vec;

    // push_back a few elements
    vec.push_back(13);
    cout << vec.size() << " " << vec.capacity() << endl;

    vec.push_back(45);
    cout << vec.size() << " " << vec.capacity() << endl;

    vec.push_back(67);
    cout << vec.size() << " " << vec.capacity() << endl;

    return 0;
}