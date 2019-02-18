/*
Leap year algorithm

*/

#include<iostream>
using namespace std;


bool leapYear( int testYear )
 {
   if ( testYear % 400 == 0 ||
   ( testYear % 100 != 0 && testYear % 4 == 0 ) )
    return true; // a leap year
 else
    return false; // not a leap year
 }

 int main()
 {
     int  year;
     cout<<"give a year :"<<endl;
     cin>>year;
     if (leapYear(year)) cout<<"This is leap year"<<endl;
     else cout<<"Not a leap year"<<endl;

 }
