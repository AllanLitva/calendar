#ifndef TIME_H
#define TIME_H

/* 
This class creates an object that records the time, my time class is not 
identical to the time class given in the base code. 

 */



class Time
{
  public:
    Time(int=0, int=0, int=0);
    void set(int, int, int);
    void print();
    int getHours();
    int getMinutes();
    int getSeconds();


  private:
    int hours;
    int minutes;
    int seconds;
};

#endif
