#include <iostream>
using namespace std;

    // Array is continuous memory allocation for varible of same data type
    // syntax
    // datatype name [number of blocks] = {value1, value2, value3, and so on}
    // indexing starts from 0,              0       1       2      and so on
    // syntax to access value inside array 
    // name [block number of value you want to access ]


int main (){

    int arr [6] = {11, 22, 33, 44, 55, 66};


    cout << "The value at block 0 is " << arr [0] << endl;
    cout << "The value at block 1 is " << arr [1] << endl;
    cout << "The value at block 2 is " << arr [2] << endl;
    cout << "The value at block 3 is " << arr [3] << endl;
    cout << "The value at block 4 is " << arr [4] << endl;
    cout << "The value at block 5 is " << arr [5] << endl;



    return 0;
}