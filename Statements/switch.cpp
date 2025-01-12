#include <iostream>
#include <string>
using namespace std;

int main (){

    int a = 10;
    int b = 5;
    int choice;

    cout << " 1: Addition\n 2: Subtraction\n 3: Multiplication" << endl;
    cin >> choice;

    switch (choice ){

        case 1:
        cout << a + b<< endl;
        break;
        case 2:
        cout << a - b << endl;
        break;
        case 3:
        cout << a * b << endl;
        break;
        default:
        cout << "Invalid choice. Please restrat the program" << endl;
    }

    return 0;
}