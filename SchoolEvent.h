#ifndef SchoolEvent_H
#define SchoolEvent_H
#include <string>

#include "Date.h"
#include "Event.h"
#include "Event.h"

using namespace std;
                                                                                
class SchoolEvent: public Event                                                 
{                                                                               
    
  public:
      SchoolEvent(string,int,int,int,int,int,int,int);
      virtual bool lessThan(Event *e);
      virtual ~SchoolEvent();






};                                                                              
#endif 


