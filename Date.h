#ifndef DATE_H
#define DATE_H
#include <string>
#include "Time.h"

using namespace std;
/*
 This class records a date, it takes the year, month, day, and a time object
 the parameters for the time object are passed in the constructor of the date
*/

class Date
{
  public:
    Date(int=0, int=0, int=2000, int=0, int=0, int=0);
    ~Date();
    void set(int, int, int);
    void printLong();
    bool lessThan(Date);
    Time getTime();


  private:
    Time time;
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr();
};

#endif
