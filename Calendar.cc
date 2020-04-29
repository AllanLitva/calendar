#include<iostream>
#include<iomanip>
#include<string>

#include "Calendar.h"

using namespace std;


// calendar constructor
Calendar::Calendar(string n):name(n){
    
    numEvents = 0;
       
}


// adds event pointer to calendar using the calendars list attribute 
void Calendar::add(Event* e){
    list.add(e);
    numEvents++;
    
}

            
// uses the calendars list to print the events 
void Calendar::print(){
    list.print();


}

// getter for the number of events in the calendar 
int Calendar::getNumEvents(){
   return numEvents;
}

