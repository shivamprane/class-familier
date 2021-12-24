#include<iostream>

using namespace std;

class wall{                           //class declaration
    int length = 10;                 //class members
    int breadth = 5;
    public:
    void getvalues(){
        cout << "Enter length: ";
        cin >> length;
        cout << "\nEnter breadth: ";
        cin >> breadth;
    }  
    void area(){                                         //class functions
        cout << "\nArea: " << length*breadth << endl;
    }
};

int main(){
    wall wall1;                       //box1 is and object of class wall
    wall1.getvalues();
    wall1.area();
return 0;
}
