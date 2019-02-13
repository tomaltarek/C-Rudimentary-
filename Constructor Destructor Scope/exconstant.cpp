#include "constant.h"
#include<iostream>
using namespace std;

//constructor- initializing private member name
//one of the major functions of constructor is initialize member variables
//we could have directly assign a string to name, but we used setName, a good practice
exConstant::exConstant(int ID, string Name, string Msg)
{

        object_id=ID;
        msg=Msg;
        setName(Name);
        cout<<"Object"<<object_id<<" Constructor runs   :"<<msg<<endl;
}

//destructor
exConstant::~exConstant()
{
   cout<< "\nDestructor runs : "<< "Object "<<object_id<<"  died"<<endl;
}

void exConstant::setName(string Name)
{
    name=Name;
}

string exConstant::getName()const
{
    return name;
}

