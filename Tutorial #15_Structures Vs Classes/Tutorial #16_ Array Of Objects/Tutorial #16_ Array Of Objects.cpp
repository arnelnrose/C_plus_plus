#include <iostream>

using namespace std;

class student{

    public:
    string name;
    int studentID;
    float generalAverage;

    //Object Functions
    void setInformation(string aName,int aStudentID,float aGeneralAverage){
    name = aName;
    studentID = aStudentID;
    generalAverage = aGeneralAverage;

    displayInformation();

    }

    void displayInformation(){

        cout << "==== Student ID #:" << studentID << " ====" << endl;
        cout << "Student Name: " << name << endl;
        cout << "General Average: " << generalAverage << endl;
        cout << "=========================" << endl;


    }
};



int main()
{
    student students[3];
    for(int i = 0; i < 3; i++){

        string name;
        float generalAverage;

        cout << "Enter Name: ";
        cin >> name;

        cout << "General Average: ";
        cout << generalAverage;

        students[i].setInformation(name,i,generalAverage);

    }

    return 0;
}
