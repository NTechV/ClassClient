
#include <iostream>
#include "h.hpp"
using namespace std;
void nline() {
    cout << "\n";
}


int main()
{

    Bicycle x;
    Bicycle f(93);
    cout << "\n F inital speed: " << f.getspeed() << endl << "\n" << "\n";
    x.setSpeed(5);

    
    f.setSpeed(95);
    cout << "Setting f speed\n";
        cout << "\nSpeed x: " << x.getspeed() << endl;
    x.increasespeed();
    cout << "\nIncreasing x speed: " << x.getspeed() << endl;
    x.reducespeed();
    cout << "\nReducing x speed:  " << x.getspeed() << endl;
    cout << "\nSpeed f:  " << f.getspeed() << endl;
    f.increasespeed();
    cout << "\nIncreasing  f speed: " << f.getspeed() << endl;
    cout << "\nsetting F speed manually \n";
    f.setSpeed(9);
    cout << "\nf speed now: " << f.getspeed() << endl;
    cout << "\nReducing f speed\n";
    f.reducespeed();
    nline();
    nline();
    cout << "f and x address: x: " << &x << "f: " << &f << "\n";

}
