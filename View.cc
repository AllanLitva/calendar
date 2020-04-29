#include <iostream>
#include <iomanip>

#include "View.h"

using namespace std;


int mainMenu();

// takes a calendar as input and calls its print fn 
void View::printCalendar(Calendar &calendar){

    calendar.print();
}

// uses the main menu fn to ask user if they want to add events to their 
// calendar, it returns 1 if they do, 0 if they do not 
int View::userIo(){

    int menuSelection;
     
    menuSelection = mainMenu();
   
    return menuSelection;


}

// promptd user for input data for an event, input parameters values are updated// and set equal to the prompted data. This data is used in control to create 
// the events. 

void View::readEvent(string &n, int &d, int &m, int &y, int &h
        ,int &mn, int &s, int &p){
    
    int    day, month, year, hours, minutes, seconds, priority;
    string name;
    string nameHolder;
     
      cout << "name:  ";
      cin  >> name;
      n = name;

      cout << "day:   ";
      cin  >> day;
      d = day;

      cout << "month: ";
      cin  >> month;
      m = month;

      cout << "year:  ";
      cin  >> year;
      y = year;

      cout << "hours: ";
      cin  >> hours;
      h = hours;

      cout << "minutes: ";
      cin  >> minutes;
      mn = minutes;


      cout << "seconds: ";
      cin  >> seconds;
      s = seconds;

      cout << "priority: ";
      cin >> priority;
      p = priority;


}
// prompts user to select what type of event they have, 1 if its a school event
// 0 if its a work event 

int View::eventType()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) School Event" << endl;
  cout << "(0) Work Event" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}



// asks the user if they want to create a new event to add to the calendar 
int View::mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add Event" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}

