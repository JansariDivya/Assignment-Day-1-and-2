//Problem:- Calculates Area and Volume through Function in c++

#include <iostream>
using namespace std;

class Measure {

   public:
    int length;
    int breadth;
    int height;

   public:

    // function to initialize private variables
    void setInput(int len, int brth, int hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }
    

    //Calculates Area
    void area() {
       
        cout << "Area of Room =  " << length * breadth << endl;
    }

    //Calculates Volume
    void volume() {
        
        cout << "Volume of Room =  " <<  length * breadth * height<< endl;
    }
};

int main() {

    // create object of Room class
    Measure obj1,obj2;

    // pass the values of private variables as arguments
    obj1.setInput(2,3,4);
    obj2.setInput(4,5,6);
  
    
    cout<<"Volume and Area of the Object 1:-"<<endl;
    obj1.volume();
    obj1.area();
    cout<<endl;
    cout<<"Volume and Area of the Object 2:-"<<endl;
    obj2.volume();
    obj2.area();
    return 0;
}
