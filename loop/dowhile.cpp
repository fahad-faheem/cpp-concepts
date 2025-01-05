#include <iostream>
using namespace std;

int main (){

    // do {task} while (condition)

    int a, b;

    cout << "Enter a vlue: " << endl;
    cin >> a;
    cout << "Enter a vlue: " << endl;
    cin >> b;

    do {
        cout << "The value of a (" << a << ")is less than b " << " (" << b << ")" << endl;
        a++;
    } while (a < b);


    cout << "The loop ends here because a (" << a << ") is equal to ("  << b << ")" << endl;



    // this is just how loop works



    return 0;
}