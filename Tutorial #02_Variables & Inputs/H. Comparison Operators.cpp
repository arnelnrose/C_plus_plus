#include <iostream>

using namespace std;

int main()
{

   float generalAvg;
   cout << "Enter general Average: ";
   cin >> generalAvg;

   if (generalAvg >= 98 ){
                cout << generalAvg << " With Highest Honors ";
        }else if (generalAvg >= 95 && generalAvg < 98 ){
                cout << generalAvg << " With Highest Honors ";
        }else if (generalAvg >= 90 && generalAvg < 95 ){
                cout << generalAvg << " With Honors ";
        }else if (generalAvg < 90 && generalAvg >= 75 ){
                cout << generalAvg << " General Average Is A Passing Mark ";
        }else {

                cout << "You are Failed";

        }

    return 0;
}
