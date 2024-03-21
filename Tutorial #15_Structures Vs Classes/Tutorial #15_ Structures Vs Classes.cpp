#include <iostream>

using namespace std;

struct student{
    string name;
    int gradeLevel;

    student(string aName, int aGradeLevel){
        cout << "Hello" << endl;
    }
};

class human{

    public:
    string name;
    int age;

    human(string aName, int aAge){
    cout << "Hi!" << endl;

    }


};

int main()
{
    student s1("Cayden",11);
    human h1("Gabriel",8);

    return 0;
}
