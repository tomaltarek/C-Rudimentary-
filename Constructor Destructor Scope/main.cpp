/*
@tomal tarek, 2019
-------------------
This program consists of three part:
- a header file constant.h
- a class file exConstant.cpp
- main.cpp

the purpose is to demonstrate:
-constant object
-Constructor and Destructor scope
*/

#include <iostream>
#include "constant.h"

using namespace std;

// to test scope of constructor and destructor in a function
void testScope();

exConstant con1(1,"Tomal","this object created before main\n");


int main()
{
    exConstant con2(2,"Joyee","first object created in main");
    cout<<"printing name :"<<con1.getName()<<endl; ;
    cout<<"printing name :"<<con2.getName()<<endl;

    cout<<"\nentering into a function..."<<endl;
    testScope();

    cout<< "\nMain function resumes..."<<endl;
    exConstant con4(4,"Motto", "Another object created in main");

    cout<<"printing name :"<<con4.getName()<<endl;

    //below is a way to create a constant object
    //a constant object cannot modify any member function
    //it can only use methods that has been declared and defined as const

    const exConstant con5(5,"Mrs Peet","No message");
    cout<<con5.getName()<<endl;

    /*

    The below statement will cause compilation error
    con5.setName("new name ");
    */
}

void testScope()
{
    // creating object
    exConstant con3(3,"Mayah", "this object was created in the function" );


    cout<<"printing name  :"<<con3.getName()<<endl;
    cout<<"...leaving function"<<endl;
}
