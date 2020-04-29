#ifndef Calendar_H
#define Calendar_H
#define MAX_ARR_SIZE 128
#include<string>
#include "Event.h"
#include "List.h"



/*
 This class simulates a calendar, it takes an array of event pointers and 
 has methods to display these events. 
 

*/   


class Calendar
{
    public:
        void add(Event*);
        Calendar(string="unknown");
        void print();
//        ~Calendar();
        int getNumEvents();

    private:
        string name;
        int numEvents;
       // Event* events[MAX_ARR_SIZE];
        List list;

};

#endif
