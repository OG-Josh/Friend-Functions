#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "employee.h"

class Programmer : public employee
{
public:
    Programmer();
    Programmer(string name, int id, string phone, int age, char gender,string title, int salary, int date,int month, int year, int dept, string super, int raise, bool cpp, bool java);
    int get_department();
    void set_department(int dept);
    string get_supervisor();
    void set_supervisor(string supervisor);
    int get_raise();
    void set_raise(int raise);
    bool get_cpp();
    void set_cpp(bool cpp);
    bool get_java();
    void set_java(bool java);
    void print();
private:
    int department;
    string supervisor;
    int raise;
    bool cpp;
    bool java;
};

#endif //PROGRAMMER_H
