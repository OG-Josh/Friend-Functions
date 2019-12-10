#include <string>
#include "Date.h"

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class employee
{
public:
    employee();
    employee(string name, int id, string phone, int age, char gender,string title,int salary, int date,int month, int year);
    string get_name();
    void set_name(string name);
    int get_id();
    void set_id(int id);
    string get_phone();
    void set_phone(string phone);
    int get_age();
    void set_age(int age);
    char get_gender();
    void set_gender(char gender);
    int get_salary();
    void set_salary(int salary);
    Date get_date();
    void set_date( int date,int month, int year);
    string get_title();
    void set_title(string title);
    void print();
    friend ostream & operator << (ostream &out, employee &c);
private:
    string name;
    int id;
    string phone;
    int age;
    char gender;
    int salary;
    string title;
    Date hire_date;
};

#endif //EMPLOYEE_H
