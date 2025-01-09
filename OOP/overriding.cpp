#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
    void messege (){
        cout << "Unknown -- Car " << endl;
    }
};

class Rose1: public Car {
    public:
    void messege (){
        cout << "Rose_1 -- White Toyota" << endl;
    }
};

class Rose2: public Car  {

    public:
    void messege (){
        cout << "Rose_2 -- Red Tesla" << endl;
    }
};

class Rose3: public Car {
    public:
    void messege (){
        cout << "Rose_3 -- Blue Bentaly" << endl;
    }
};

int main (){

    Car objCar;

    Rose1 objRose_1;
    Rose2 objRose_2;
    Rose3 objRose_3;

    objCar.messege ();
    objRose_1.messege();         // If the public function (messege) is available in both derived and base
    objRose_2.messege();         // calling this function from derived class object will invoke function
    objRose_3.messege();         // from derived class, and ignore the base class function. -- Function overriding 



    return 0;
}