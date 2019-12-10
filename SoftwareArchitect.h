#ifndef SOFTWAREARCHITECT_H
#define SOFTWAREARCHITECT_H

#include "employee.h"
#include "Programmer.h"

class SoftwareArchitect : public employee
{
public:
    SoftwareArchitect();
    SoftwareArchitect(string name, int id, string phone, int age, char gender,string title, int salary, int date,int month, int year, int dept, string super, int raise, int experience);
    int get_department();
    void set_department(int dept);
    string get_supervisor();
    void set_supervisor(string supervisor);
    int get_raise();
    void set_raise(int raise);
    int get_experience();
    void set_experience(int experience);
    void print();
    void addition(int num);
    SoftwareArchitect operator+(int);
    friend ostream & operator << (ostream &out, SoftwareArchitect &c);
    friend istream & operator >> (istream &in,  SoftwareArchitect &c);
    SoftwareArchitect operator++();
    const SoftwareArchitect operator++(int);
    bool operator==(SoftwareArchitect);
    friend bool compare_phone(Programmer &programmer, SoftwareArchitect &architect);
private:
    int department;
    string supervisor;
    int raise;
    int experience;
};
#endif //SOFTWAREARCHITECT_H
