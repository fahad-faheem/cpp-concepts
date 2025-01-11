#include <iostream>
using namespace std;

int main (){

    int size = 7;                              // size of array
    int* arr = new int [size];                  // syntax for creating array dynamically

    for (int i = 0; i < size; i++){             // assign values to array
        arr[i] = i * 10;
    }

    for (int i = 0; i < size; i++){             // print values of array
        cout << arr [i] <<  endl; 
    }

    delete[] arr;

    return 0;
}