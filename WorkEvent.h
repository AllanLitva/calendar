#ifndef WorkEvent_H
#define WorkEvent_H
#include <string>
#include "Event.h"

using namespace std;

class WorkEvent: public Event                                                 
{                                                                               
    
  public:
      WorkEvent(string,int,int,int,int,int,int,int);
      virtual bool lessThan(Event *e);
      virtual ~WorkEvent();






};                                                                              
#endif 


