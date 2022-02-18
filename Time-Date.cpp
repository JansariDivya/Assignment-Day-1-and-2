//Problem:- Write a cop code that has two class Time and Date which finds current time and Age

#include <iostream>
#include <ctime>  
using namespace std;

time_t now = time(0); 
tm* ltm = localtime(&now);

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    Time setTime();
    void getTime(void);
    Time sleepTime(Time T1,Time T2);
};
 
//Calculates current Time
Time Time::setTime()
{
    Time T7;
    T7.hours= 5 + ltm->tm_hour;  
    T7.minutes= 30 + ltm->tm_min;  
    T7.seconds= ltm->tm_sec; 
    cout<<T7.hours<<":"<<T7.minutes<<":"<<T7.seconds<<endl;;
    cout<<endl;
    return T7;
}

//Outputs Sleep Time
void Time::getTime()
{
    
    cout << "Sleep Time is :"<<hours << ":" << minutes << ":" << seconds << endl;
}
 
//Calculates Sleep Time
Time Time::sleepTime(Time T1,Time T2)
{
    Time T3;
    T3.hours=T2.hours-T1.hours;
    T3.minutes=T2.minutes-T1.minutes;
    T3.seconds=T2.seconds-T1.seconds;
    
    return T3;
}


class Date
{
public:
    int Day;
    int Month;
    int Year;
 
public:
    Date setDate();
    Date getDate(/*Date*/);
    Date setDOB(int,int,int);
    Date findAge(Date,Date);
};
 
//Sets Current Date
Date Date::setDate()
{
   Date D1;
    
    D1.Day=ltm->tm_mday;
    D1.Month=1 + ltm->tm_mon;
    D1.Year=1900 + ltm->tm_year;
    
    return D1;
    
}

//Inputs the date from user
Date Date::setDOB(int d,int m,int y)
{
   Date D2;
    
    D2.Day=d;
    D2.Month=m;
    D2.Year=y;
    
    return D2;
    
}

//Shows Date
Date Date::getDate(/*Date D9*/)
{
   Date D3;
    D3.Day=Day;
    D3.Month=Month;
    D3.Year=Year;
    
    return D3;
    
    /*Date D3;
    D3.Day=D9.Day;
    D3.Month=D9.Month;
    D3.Year=D9.Year;
    
    return D3;*/
}
 
//Calculates Age
Date Date::findAge(Date D4,Date D5)
{
    Date D6;
    D6.Day=D4.Day-D5.Day;
    D6.Month=D4.Month-D5.Day;
    D6.Year=D4.Year-D5.Year;
    
    return D6;
}
 
//Driver Program
int main()
{
    Date D7,D8,D9,D5;
    Time T1,T2,T3;

    cout<<"Time T1"<<endl;
    T1=T1.setTime();
     cout<<"Time T2"<<endl;
    T2=T2.setTime();
    T3=T3.sleepTime(T1,T2);
    cout<<"Sleep Time T3"<<endl;
    T3.getTime();
    cout<<endl;
    
    
    D7=D7.setDOB(12,8,1998);
    cout<<endl;
    D8=D8.setDate();
    
      D9=D9.findAge(D7,D8);
      D9=D9.getDate();
      cout<<"Age is"<<D9.Year<<"years"<<D9.Month<<"Months"<<D9.Day<<"Days";  
     
    return 0;
}
