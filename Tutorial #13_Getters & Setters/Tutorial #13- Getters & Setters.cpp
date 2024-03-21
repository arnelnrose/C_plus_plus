#include <iostream>

using namespace std;

class Shirt{

    private:
      string Size;

    public:
        string Brand;
        string Color;

    Shirt(string aBrand, string aColor, string aSize){

        Brand = aBrand;
        Color = aColor;
        setSize (aSize);

        cout << "You Created a Shirt!" << endl;

  }

    //Getter
    string getSize(){
    return Size;

    }

    //Setter
    void setSize(string aSize){
    if(aSize == "XS" || aSize == "S" || aSize == "M" || aSize == "L" || aSize == "XL" ){
       Size = aSize;

    }else Size = "Unknown Size";

    }
};


int main()
{

    Shirt shirt1("Bench","Black","asasdasda");
    shirt1.setSize("XL");
    cout <<shirt1.getSize();

    return 0;
}
