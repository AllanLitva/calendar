#include <iostream>
#include <iomanip>
#include <string>

#include "Time.h"

using namespace std;

// time constructor
Time::Time(int h, int m, int s){
  set(h, m, s);
}


// used by the times constructor to ensure the input is valid 
void Time::set(int h,int m,int s){
  hours   = ( h >= 0 && h < 24) ? h : 0;
  minutes = ( m >= 0 && m < 60) ? m : 0;
  seconds = ( s >= 0 && s < 60) ? s : 0;
}

int Time::getHours(){
    return hours;

}

int Time::getMinutes(){
   return minutes;
}

int Time::getSeconds(){
   return seconds;
}



// prints the time 
void Time::print(){
    cout<< "Time      : "<<setfill('0')<<setw(2)<<hours<<":"
      <<setfill('0')<<setw(2)<<minutes<<":"
      <<setfill('0')<<setw(2)<<seconds<<endl;
}

