#include <iostream>

using namespace std;

class User{

 // One User of a MMORPG

    public:
        string userName;
        string type;
        int hp;
        int mp;
        int level;
        int exp;

};

int main()
{

    User playerOne;
    playerOne.userName = "Layla";
    playerOne.type = "Marskman";
    playerOne.hp = 100;
    playerOne.mp = 25;
    playerOne.level = 5;
    playerOne.exp = 10;

    User playerTwo;
    playerTwo.userName = "Eudora";
    playerTwo.type = "Mage";
    playerTwo.hp = 200;
    playerTwo.mp = 50;
    playerTwo.level = 5;
    playerTwo.exp = 20;

    cout << playerTwo.userName;


    return 0;
}
