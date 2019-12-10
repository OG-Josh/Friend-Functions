#include "Date.h"

Date::Date(){
}

Date::Date(int dat, int mon, int yea) {
    date = dat;
    month = mon;
    year = yea;
}

int Date::get_date() {
    return date;
}

int Date::get_month() {
    return month;
}

int Date::get_year() {
    return year;
}

ostream & operator << (ostream &out, Date &c)
{
    out << c.get_month() << "/"  << c.get_date() << "/" << c.get_year();
    return out;
}