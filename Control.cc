#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Control.h"

void Control::launch(){
    
// parameters used to create not events below
    string  name;
    int      day;
    int    month;
    int     year;
    int    hours;
    int  minutes;
    int  seconds;
    int priority;
     
    // the menuSelection variable uses the views userIo fn which prompts the 
    // user to enter an event or to quit. The value is 1 if the user wishes
    // to enter a book, 0 if finished.  
    
    int menuSelection;
    int eventType;
    int numSchool=0; // used to see if there are enough events to call print
    int numWork  =0;// does the same for work events 
    
    while(1){
        menuSelection = view.userIo();
    
        if(menuSelection == 0){
            break;
        }
        
        // menuSelection = 1, so call view to get user io 
        view.readEvent(name,day,month,year,hours,minutes,seconds,priority);
        
        // event type prompts the user for the type of event
        // ie school or work, it returns an integer.
        //
       
        eventType = view.eventType();
        
        if(eventType == 1){
           // make a school event and add it to the school calendar 
            SchoolEvent* e = new SchoolEvent(name,day,month,year,hours,
                    minutes,seconds,priority);
            
            schoolCalendar.add(e); 
            numSchool++;
        }

        if(eventType == 0){
            // make a work event and add it to the work calendar 
            WorkEvent* e = new WorkEvent(name,day,month,year,hours,minutes,
                    seconds,priority);

            workCalendar.add(e);
            numWork++;

        }
    }
    if(numSchool>0){
        cout << "    \n\n         "<< endl;
        cout <<"=================="<< endl;
        cout <<" School Calendar  "<< endl;
        cout <<"==================\n"<< endl;
        cout<<"Sorted by date:\n"<<endl;
        
        // print school calendar using view 
        view.printCalendar(schoolCalendar);
        cout <<"==================\n"<< endl;
        cout << "    \n         "<< endl;

    }
    else
        cout<< "There are no schoolEvents in your calendar! \n"<<endl;

    if(numWork >0){
        cout <<"=================="<< endl;
        cout <<"   Work Calendar  "<< endl;
        cout <<"==================\n"<< endl;
        cout <<"Sorted by priority:\n"<< endl;

        // print work calendar using the views print fn
        view.printCalendar(workCalendar);
        cout <<"==================\n"<< endl;
    }
    
    
    else 
        cout << "There are no workEvents in your calendar!\n"<<endl;







}
         

        
       
        
        
 
   


