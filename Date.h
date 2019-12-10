#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
public:
    Date();
    Date(int hrs, int min, int sec);
    int get_date();
    int get_month();
    int get_year();
    friend ostream & operator << (ostream &out, Date &c);
private:
    int date;
    int month;
    int year;
};

#endif //DATE_H
