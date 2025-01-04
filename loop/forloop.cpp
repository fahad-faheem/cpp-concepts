#include <iostream>
using namespace std;

    // what is loops?
    // loops are used to repeat a tasks until specific condition is true
    // syntx 
    // for (delare and initialize variabele; condition; increment/decrement){
    // task  }

int main (){

    for (int i = 0; i < 10; i++){

        cout << "The value " << i << " is less than 10" << endl;

    }

    cout << "The loop ends because i isn't less than 10 anymore" << endl;

    return 0;
}