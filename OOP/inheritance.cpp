#include <iostream>
#include <string>
using namespace std;

class Car {

    private:

        string owner;           
        int numberplate;            
        int price;
        string color;
        string company;

    protected:

        int password = 8818;

    public:

    void adddata (string car_owner, string car_color, string car_company, int car_numberplate, int car_price){

            owner = car_owner;
            color = car_color;
            company = car_company;
            numberplate = car_numberplate;
            price = car_price;


    };

    void printdata (){

            cout << "-----" << owner << "-----" << endl << endl;
            cout << numberplate << endl;
            cout << price << "/-" << endl;
            cout << color << endl;
            cout << company << "\n" << endl;

    };

    
};

class Rose1: public Car {
    public: 
    void customDetails (){
        cout << "Rose 1 is powerful car" << endl;
    };
    };

class Rose2: public Car {
    public:
    void customDetails(){
        cout <<"Rose 2 is an electric car" << endl;
    };
};
class Rose3: public Car {
    public:
    void customDetails(){
        cout << "Rose 3 is luxury car" << endl;
    };
};


int main (){

    Car Rose_1, Rose_2, Rose_3;    
    Rose1 rose1;
    Rose2 rose2;
    Rose3 rose3;                            

        Rose_1.adddata ("Rose1", "White", "Toyota", 8686, 200000); 
        Rose_2.adddata ("Rose2", "Red", "Tesla", 8888, 250000);
        Rose_3.adddata ("Rose3", "Blue", "Bentaly", 1998, 300000);

        rose1.customDetails();
        Rose_1.printdata ();  

        rose2.customDetails();
        Rose_2.printdata ();  

        rose3.customDetails();
        Rose_3.printdata ();  


    
    return 0;
}