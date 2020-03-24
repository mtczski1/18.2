#include "Timer.h"
#include <ctime>
#include <iostream>

using namespace std;

Timer::Timer()
{
    czyDziala = false;
    counter = 0;
}





void Timer::zegar()
{
        timer=clock();
    while(czyDziala==true)
    {

        if(clock()>timer+1000)
        {
            system("cls");
            timer=clock();
            counter++;
            cout<<getCounter();


        }
    }
}

void Timer::start()
{
    setCzyDziala(true);
    zegar();
}


void Timer::pause()
{
    setCzyDziala(false);
}



void Timer::setCzyDziala(bool number)
{
    czyDziala=number;
}


void Timer::stop()
{
    setCzyDziala(false);
    system("cls");
    zegar();
    cout<<getCounter();

}

int Timer::getCounter()
{
    return counter;
}











