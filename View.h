#ifndef View_H
#define View_H

#include "Calendar.h"

using namespace std;


class View

{
    public:
        void  printCalendar(Calendar &);
        int  userIo();
        void readEvent(string &n, int &d, int &m, int &y,
                int &h, int&mn, int &s, int &p);
        int  mainMenu();
        int eventType();






};

#endif
