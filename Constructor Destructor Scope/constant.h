/*
this header file uses a externally defined destructor file
the purpose of this program is to examine the scope of constructor and destructor
*/

#include<string>
using namespace std;

// if header is not already included
#ifndef CONSTANT_H_INCLUDED
#define CONSTANT_H_INCLUDED

class exConstant
{
    public:
    //constructor
    exConstant(int, string, string);

    // below is the externally defined destructor
    ~exConstant();


    void setName(string Name);

    //it is good to declare it as a constant
    string getName() const;


    private:
    string name;
    int object_id;
    string msg;
};



#endif // CONSTANT_H_INCLUDED
