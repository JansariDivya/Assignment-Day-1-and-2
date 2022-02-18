//Problem:- Performs Calculator operation in C++

#include <iostream>
#include<math.h>
using namespace std;

class Calculator{ 
    
    public:
    double x,y;
     
    public:

    //Provides Message
    void message(){
       cout << " :: Welcome to Divya's CALCULATOR! ::" << endl;
    }
    
    //Performs Addition
    double addition(const double & x,const  double & y){ 
        cout<<"Addition:";
        return x + y; 
    }

   //Performs Substraction
    double subtraction(const double & x,const  double & y){ 
        cout<<"Substraction:";
        return x-y;
    }

   //Performs Multiplication
    double multiplication(const double & x,const  double & y){ 
        cout<<"Multiplication:";
        return x * y;
    }

    //Performs Division
    double division(const double & x,const  double & y){
        cout<<"Division:";
        if(y==0){
          cout << "There was a divide-by-zero error in the division function.\n Don't divide by zero please." << endl;
            return 0;
        }
        return x / y;
    }
    
    //performs Cube operation
    double cube(const double & x){ 
        cout<<"Cube:";
        return (x*x*x);
    }
 
    //performs Square root
    double squareroot(const double & x){ 
        cout<<"Squareroot:";
        return (sqrt(x));
    }
    
};

int main(){
int func,flag;

int x=40, y=20;

Calculator key; //Object


key.message();

do
{
cout<< "Enter the Two Numbers that you want to perform operations on:\n"<<endl;
cout<< "Enter Number 1:-"<<endl;
cin>>x;
cout<<"Ënter Number 2:-"<<endl;
cin>>y;
cout << "What function do you want to use? " << endl;
cout << "1 - Addition " << endl;
cout << "2 - Subtraction " << endl;
cout << "3 - Multiplication " << endl;
cout << "4 - Division " << endl;
cout << "5 - Cube"<<endl;
cout << "6 - Squareroot"<<endl;
cout << "7 - exit"<<endl;

cout << "Input: " << endl;

cin >> func;
cout << endl;



switch(func){

    case 1: //Addition
     
        cout << key.addition(x, y);
        break;          
    case 2: //Subtraction
     
        cout << key.subtraction(x, y);
        break;              
    case 3: //Multiplication
    
        cout << key.multiplication(x, y);
        break;      
    case 4: //Division
      
        cout << key.division(x, y);
        break;
        
    case 5:  
        cout<< key.cube(x);  
        break;  
    case 6:
        cout<< key.squareroot(x);
        break;
    case 7:
        exit(0);     
        break;  

    default:
        cout << "Invalid Input...";
        break;
        
}
   cout<<endl<<"Do you want to continue(Enter 1 to continue)"<<endl;
   cin>>flag;
   if(flag!=1)
   break;
   
}
while((func!=7)||(flag==1));

}
