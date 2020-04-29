#include <iostream>
#include <iomanip>
#include <string>

#include "Date.h"

using namespace std;


// date constructor 
Date::Date(int d, int m, int y, int h, int mn, int s):time(h,mn,s){ 
 
  set(d, m, y);

  
}

// dates default constructor 
Date::~Date(){
}


// checks the input parameters to ensure they are valid years/months/days 
void Date::set(int d,int m,int y){
  year  = ( ( y > 0) ? y : 0 );
  month = ( ( m > 0 && m <= 12) ? m : 0 );
  day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
  
}


// prints the date
void Date::printLong(){
  cout<< "Date      : "<<getMonthStr()<<" "<<day<<", "<<year<<endl;
  // uses the datestime obj to call its print fn 
  time.print();
}

int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

// determines if the current year is a leap year
bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

// converts the month int to the string representation of the month
string Date::getMonthStr() 
{
  string monthStrings[] = { 
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}

// time getter
Time Date::getTime(){
    return time;
}



/*
 The function lessThan takes a date object as a parameter and compares it
 to the date object it is called on. It compares the year, month, day, hours
 minutes and seconds in that order. It will return true(ie 1) if the date        lessthan is called on is older, 0 otherwise 
  
*/


bool Date::lessThan(Date d){

   if(year == d.year){
       if(month == d.month){
           if(day == d.day){
               if(time.getHours() == d.time.getHours()){
                   if(time.getMinutes() == d.time.getMinutes()){
                       if(time.getSeconds() == d.time.getSeconds()){
                           return false;
                       }
                   }
                   else{
                       
                       return(time.getMinutes()>d.time.getMinutes());
                   }
               }
                else{
                
                   return(time.getHours()>d.time.getHours());
                }
           }
           else{
               
            return(day>d.day);
           }
       }
       else{
        
        return(month>d.month);
       }
   }
   return(year>d.year);

}

