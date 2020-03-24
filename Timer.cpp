#include "Timer.h"
#include <ctime>
#include <conio.h>
#include <iostream>

using namespace std;

Timer::Timer()
{
    czyDziala = false;
    counter = 0;
    kontynuacja=true;
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
            if( kbhit() )
            {
                char znak=getch();
             if(znak==' ') pause();
             else if(znak == 'q' ) stop();
            }


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
    cout<<endl<<"Zapauzowano";
}



void Timer::setCzyDziala(bool number)
{
    czyDziala=number;
}


void Timer::stop()
{
    kontynuacja=false;
    setCzyDziala(false);
    system("cls");
    cout<<"Czas koncowy: "<<getCounter()<<" sekund";


}

int Timer::getCounter()
{
    return counter;
}











