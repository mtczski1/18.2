#ifndef TIMER_H
#define TIMER_H
#include <ctime>'
#include <iostream>

using namespace std;


class Timer
{
    public:
        Timer();
        void pause();
        void start();
        void stop();
        void wybor();

        void setCzyDziala (bool number);
        void setCounter (int number);
        void setTimer (int number);

        int getTimer();
        int getCounter();
        bool getCzyDziala();

    private:
        int counter;
        double timer;
        bool czyDziala;
        void zegar();


};

#endif // TIMER_H
