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

    //Constructor
    User(string aUserName, string aType, int aHP, int aMP, int aLevel, int aExp){
        userName = aUserName;

        type = aType;
        hp = aHP;
        mp = aMP;
        level = aLevel;
        exp = aExp;

        cout << userName << " is Registered\n";
    }

};

int main()
{

    User playerOne("Layla","Marksman",100,25,2,10);
    User playerTwo("Eudora","Mage",200,50,5,20);
    User playerThree("Tigreal","Tank",1000,300,200,100);


    return 0;
}
