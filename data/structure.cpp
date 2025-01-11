#include <iostream>
using namespace std;

struct Player {                                                                          // structure

    long long int PlayerID;
    string PlayerName;
    int PlayerKD;
    string PlayerRank;
    int kills;

};

int main (){


    Player P1;                                                                           // structure copy

    P1.PlayerID = 5997276951;
    P1.PlayerName = "P1";
    P1.PlayerKD = 9;
    P1.PlayerRank = "Conqurer";

    cout << "This isP1 ID: " <<P1.PlayerID << endl;
    cout << "This isP1 Name: " <<P1.PlayerName << endl;
    cout << "This isP1 K/D: " <<P1.PlayerKD << endl;
    cout << "This isP1 Rank: " <<P1.PlayerRank << endl;
    cout << "This isP1 kill: " <<P1.kills << endl;



    return 0;
}