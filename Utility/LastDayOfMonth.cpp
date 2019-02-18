#include<iostream>
using namespace std;
class jDate
{
public:
  void setYearMonth(int y, int m)
  {
    if (y>=1900&&y<=2100)
        year=y;
      else
        throw invalid_argument("Year must be 1900-2100");

    if (m>=1&&m<=12)
      month=m;
      else
      throw invalid_argument("Month must be 1-12");
  }

int lastDayOfMonth(int testMonth)

{
 int days[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (testMonth==2&&leapYear(year))
   return 29;

  else
    return days[testMonth];
}

static bool leapYear( int testYear )
 {
   if ( testYear % 400 == 0 ||
   ( testYear % 100 != 0 && testYear % 4 == 0 ) )
    return true; // a leap year
 else
    return false; // not a leap year
 }


private:
    static const int days[];
    int year;
    int month;

};

 int main()
 {

    int year, month;
    jDate YearMonth;
    cout<<"give year (1900-2100):"<<endl;
    cin>>year;

    cout<<"give month(1-12) :"<<endl;
    cin>>month;

   YearMonth.setYearMonth(year,month);
   cout<<"The last day of this month is :"<<YearMonth.lastDayOfMonth(month)<<endl;


 }
