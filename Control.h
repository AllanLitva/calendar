#ifndef Control_H
#define Control_H

#include "View.h"
#include "Calendar.h"
#include "SchoolEvent.h"
#include "WorkEvent.h"

using namespace std;

class Control 

{

 public:
     View view;
     Calendar schoolCalendar;
     Calendar workCalendar;   

     void launch();


};

#endif 
