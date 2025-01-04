#include <iostream>
using namespace std;

int main (){

    int* number = new int;     // Allocate memory of int datatype in dynamic memory and store address inside pointer variable
    *number = 4343;            // Initialize value at memory address using reference (address) of memory 
    cout << *number << endl;   // Print the value at memory location using reference (address) of memory 
    delete number;             // Free the allocated memory 


    return 0;
}