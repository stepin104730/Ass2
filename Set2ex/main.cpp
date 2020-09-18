#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    MyTime t1(10,20);
    MyTime t2(1,15);
    MyTime t3=t1+t2;
    MyTime t4=t1-t2;
    t4.display();
    t3.display();
    // if(t1==t2)
    // cout << "equal\n";
    return 0;
}
