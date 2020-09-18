#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class MyTime {
    int m_hours;
    int m_minutes;
    int m_seconds;
  public:
    // Constructers

    MyTime();
    MyTime(int,int,int);
    MyTime(int,int );

    // members
    MyTime operator+(const MyTime &ref);

    MyTime operator-(const MyTime &ref);

    // bool operator==(const MyTime &ref);

    void display();



};

#endif // COMPLEX_H_INCLUDED
