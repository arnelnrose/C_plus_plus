#include <iostream>

using namespace std;

class Hero{
 // Mobile Legends My Favorite Hero "Gusion"
    public:
        string myHero;
        string type;
        int hp;
        int mp;
        int level;
        float attackspeed;

    Hero(string aMLHero, string aType, int aHP, int aMP, int aLevel, int aAS){
        myHero = aMLHero;
        type = aType;
        hp = aHP;
        mp = aMP;
        level = aLevel;
        attackspeed = aAS;
        cout << myHero << " 'Rebellious son of House Paxley'\n";
    }
};
int main()
{
    Hero myHero("Gusion","Mage/Assasin",4888,862,15,1.46);
    return 0;
}
