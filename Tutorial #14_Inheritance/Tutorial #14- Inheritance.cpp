#include <iostream>

using namespace std;

class Student{

    public:
        string name;

    //Setter
    void setName(string aName){name = aName;}

    //Getter
    string getname() {return name;}

    //Object Functions
    void introduceSelf(){
        cout << "Hello! May Name is " << name << endl;
    }

    void study(){
        cout << name << " Studied" << endl;
    }

     void bright(){
            cout << name << " Bright Student." << endl;
     }
};

class LazyStudent : public Student{

    public:
        void sleepInclass(){
        cout << name << " Slept in Class!" << endl;

        }

        void study(){
            cout << name << " Is Too Lazy To Study." << endl;

        }

};

class HardWorkingStudent : public Student{

    public:
        void hardWorking(){
        cout << name << " Studied Very Much!" << endl;
        }
};

int main()
{

    Student student1;
    student1.setName("Cayden");
    student1.introduceSelf();
    student1.study();
    student1.bright();

    LazyStudent student2;
    student2.setName("Gabriel");
    student2.introduceSelf();
    student2.sleepInclass();
    student2.study();

    HardWorkingStudent student3;
    student3.setName("Jomar");
    student3.study();


    return 0;
}
