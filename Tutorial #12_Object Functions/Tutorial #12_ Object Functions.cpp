#include <iostream>
#include <sstream>

using namespace std;

class Student{

    public:
        string name;
        int gradeLevel;
        float generalAverage;

    Student (string aName, int aGradeLevel, float aGeneralAverage){

        name = aName;
        gradeLevel = aGradeLevel;
        generalAverage = aGeneralAverage;

    cout << "Student Registered\n";

    }

    string getHonors(){

        if(generalAverage >= 98) return "With Highest Honors";
        else if(generalAverage >= 95) return "With High Honors";
        else if(generalAverage >= 90) return "With Honors";
        else return "No Merits";

    }


    string introduceSelf(){
        stringstream ss;
        ss << gradeLevel;
    return "I am " + name + " and I am a grade " + ss.str() + " Student.";

    }

};

int main()
{

    Student student1("Cayden",11,92.6);
    Student student2("Gabriel",11,85.6);
    Student student3("Jolens",11,90.6);

    cout << student1.getHonors();
    return 0;
}
