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

        // The data is encapsulated in two functions adddata, printdata
        // Without these two functions no one can access or modify private members directly
        // every modification should be pass through these functions

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


int main (){

    Car Rose_1, Rose_2, Rose_3;                                    

        Rose_1.adddata ("Rose1", "White", "Toyota", 8686, 200000); 
        Rose_2.adddata ("Rose2", "Red", "Tesla", 8888, 250000);
        Rose_3.adddata ("Rose3", "Blue", "Bentaly", 1998, 300000);

        Rose_1.printdata ();                                       
        Rose_2.printdata ();  
        Rose_3.printdata ();  


    
    return 0;
}