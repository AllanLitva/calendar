#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "Event.h"

// event constructor
Event::Event(string n,int d, int m, int y, int h, int mn, int s,int p):name(n),
   priority(p),date(d,m,y,h,mn,s)
{
   
}

// date getter
Date Event::getDate(){
   return date;
}

// priority getter

int Event::getPriority(){
  return priority;
}


// fn to print the event details 
void Event::print(){
    cout <<"Event Name: " <<"'" <<name << "'"<< endl;
    cout <<"Priority  : " <<"'"<<priority <<"'"<<endl;
    // uses the events data obj to print itself 
    date.printLong();

}

Event::~Event(){

}
