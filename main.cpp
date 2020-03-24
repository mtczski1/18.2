#include <iostream>
#include <ctime>
#include <conio.h>
#include "Timer.h"

using namespace std;

int main()
{
    double timer;
    Timer t1;
    cout<<"----------------------------------------Stoper-----------------------------------------";
    cout<<endl<<"Instrukcja:";
    cout<<endl<<"spacja-start/pauza";
    cout<<endl<<"q-stop";
while(t1.kontynuacja==true)
{
    if( kbhit() )
    if( getch() == ' ' ) t1.start();


}


    return 0;
}
