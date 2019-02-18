/*
We will overload operator = in this program

We will compare two objects of same class
-first with the help of a function jcompare()
-finally with operator overloading

@tomaltarek, 20190217
*/

#include<iostream>
using namespace std;

class OperatorLoadingTest

{
//int a;
public:
    //constructor
    OperatorLoadingTest(int ja)
    :a(ja)

   {
      //
   }
    void setA(int s)
    {
        cout<<"Variable value changed from "<<a<<" to "<<s<<endl;
        a=s;
    }

    int getA()
    {
        return a;
    }
    // a function by which we can compare two objects
    // later we will provide the same functionality with operator overloading
    void jcompare(OperatorLoadingTest opt1)
        {
         if (a==opt1.a)
         {
             cout<<"Objects are equal"<<endl;
         }
         else
          {
            cout<<"Objects are not equal"<<endl;
          }
        }
// ** Look carefully , below is operation overloading method
        bool operator=(OperatorLoadingTest opt1)
        {
         if (a==opt1.a) return true;
         else return false;
        }

private:
    int a;
};


int main()
{
  OperatorLoadingTest opt1(18), opt2(10); // objects are not equal
  cout<<"Comparing two objects with the help of a function"<<endl;
  cout<<"Obj 1 variable="<<opt1.getA()<<" Obj 2 variable= "<<opt2.getA()<<endl;

  opt1.jcompare(opt2);

  opt1.setA(10); // making them equal


  opt1.jcompare(opt2);
  opt2.setA(12);// making them unequal again

  opt1.jcompare(opt2);
  cout<<"\n"<<endl;

  // We are doing the same functionality now with operator overloading
  if (opt1=opt2) cout<<"Both Objects are equal(done by operator overloading )"<<endl;
  else cout<<"Both Objects are not equal(done by operator overloading )"<<endl;

}

