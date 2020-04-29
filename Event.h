#ifndef EVENT_H
#define EVENT_H
#include <string>
#include "Date.h"

using namespace std;
/*
  This is an abstract class for events, schoolEvent and workEvent are subclasses  of this class. 

*/



class Event
{
 public:
     Event(string="unknown",int=0,int=0,int=2000,int=0,int=0,int=0,int=0);
     Date getDate();
     int getPriority();
     void print();
      
     //school and work events forced to impliment both of these virtual methods
     virtual bool lessThan(Event*)=0;
     virtual ~Event();

 protected:
     string name;
     int priority;
     Date date;


};

#endif

