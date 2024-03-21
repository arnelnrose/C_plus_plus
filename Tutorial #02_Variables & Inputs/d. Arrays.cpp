#include <iostream>

using namespace std;

int main()
{
    float grades[3];

    cout << "Enter First Grade:";
    cin >> grades[0];

    cout << "Enter Second Grade: ";
    cin >> grades[1];

    cout << "Enter Third Grade: ";
    cin >> grades[2];

    cout << "Enter Fourth Grade: ";
    cin >> grades[3];

    cout << (grades[0] + grades[1] + grades[2] + grades[3]) / 4;


    return 0;
}
