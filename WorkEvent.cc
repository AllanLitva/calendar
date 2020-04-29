#include<iostream>
#include<iomanip>
#include<string>

#include "WorkEvent.h"

using namespace std;

// event constructor, calls the constructor inherited from event

WorkEvent::WorkEvent(string n,int d, int m, int y, int h, int mn, 
        int s,int p):Event(n,d,m,y,h,mn,s,p)
{

}


// compares the events by priority

bool WorkEvent::lessThan(Event *e){
 return(priority > e->getPriority());

}

WorkEvent::~WorkEvent(){

}
