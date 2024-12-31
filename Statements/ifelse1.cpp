#include <iostream>
using namespace std;

/* 
 
  if (condition){
        run this if the condition is true 
    } else if (condition){
        run this if the condition is true
    } else {
        if none of the above conditions are true run thin 
    }

 */ 

int main (){

    int number1;
    int number2;

    cout << "Enter first number: " << endl;
    cin >> number1;
    cout << "Enter second number: " << endl;
    cin >> number2;

    if (number1 < number2){
        cout << "Number 1 (" << number1 << ") is less than Number 2 (" << number2 << ")" << endl;
    } else if (number1 > number2) {
        cout <<"Number 1 (" << number1 << ") is greater than Number 2 (" << number2 << ")" << endl;
    } else {
        cout << "Number 1 (" << number1 << ")isn't greater or smaller than Number 2 ("<< number2 << ")" << endl;
    }



    return 0;
}

 