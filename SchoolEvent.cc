#include<iostream>
#include<iomanip>
#include<string>

#include "SchoolEvent.h"

using namespace std;

// event constructor, calls the constructor for event 

SchoolEvent::SchoolEvent(string n,int d, int m, int y, int h, int mn, 
        int s,int p):Event(n,d,m,y,h,mn,s,p)
{

}


// compare events by date, returns true if the date of the object fn called on 
// is less than the input event

bool SchoolEvent::lessThan(Event *e){
 return(date.lessThan(e->getDate()));

}


SchoolEvent::~SchoolEvent(){

}
