#include<iostream>
#include "Complex.h"

MyTime::MyTime():m_hours(0),m_minutes(0),m_seconds(0) {}
MyTime::MyTime(int a,int b,int c):m_hours(a),m_minutes(b),m_seconds(c) {}
MyTime::MyTime(int d,int e):m_hours(d),m_minutes(e) {}
MyTime MyTime::operator+(const MyTime &ref) {

    int tmins = m_minutes + ref.m_minutes;
    int thrs = m_hours+ref.m_hours;
    return MyTime(thrs, tmins);
}
MyTime MyTime::operator-(const MyTime &ref) {
    int tmins = m_minutes - ref.m_minutes;
    int thrs = m_hours - ref.m_hours;
    return MyTime(thrs, tmins);
}
/*int MyTime::operator==(const MyTime &ref) {
    return m_hours == ref.m_hours && m_minutes == ref.m_minutes;
}*/
void MyTime::display() {
    std::cout<<m_hours<<":"<<m_minutes<<"\n";
}
