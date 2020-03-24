#include <iostream>
#include <ctime>
#include "Timer.h"

using namespace std;

int main()
{
    double timer;
    Timer t1;
    getchar();
    t1.start();
    timer=clock();
    int i=2;
    while(i>0)
    {
        if(clock()>timer+1000)
        {
            timer=clock();
            i--;
        }
    }

    t1.pause();
i=2;
    while(i>0)
    {
        if(clock()>timer+1000)
        {
            timer=clock();
            i--;
        }
    }

    t1.start();
i=2;
    while(i>0)
    {
        if(clock()>timer+1000)
        {
            timer=clock();
            i--;
        }
    }

    t1.stop();


    return 0;
}
