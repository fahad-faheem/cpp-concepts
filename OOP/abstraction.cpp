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


int main (){

    string input;

    Car Rose_1, Rose_2, Rose_3;                                    

        Rose_1.adddata ("Rose1", "White", "Toyota", 8686, 200000); 
        Rose_2.adddata ("Rose2", "Red", "Tesla", 8888, 250000);
        Rose_3.adddata ("Rose3", "Blue", "Bentaly", 1998, 300000);

        cout << "How can I help you? " << endl;
        cin >> input;

        if (input == "Details"){

            Rose_1.printdata ();                                       
            Rose_2.printdata ();        
            Rose_3.printdata ();  

        } else {
            cout << "Invalid request" << endl;
        }

    
    return 0;
}

// When we enter detail it shows all the details without your need
// for knowing how it works