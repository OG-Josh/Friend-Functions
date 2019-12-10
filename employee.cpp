#include <iostream>
#include "employee.h"

employee::employee() {

}

employee:: employee(string name, int id, string phone, int age, char gender,string title, int salary, int date,int month, int year){
    this->name = name;
    this->id = id;
    this->phone = phone;
    this->age = age;
    this->gender = gender;
    this->title = title;
    this->salary = salary;
    this->hire_date = Date(date,month,year);
}

Date employee::get_date() {
    return hire_date;
}

void employee::set_date(int date, int month, int year) {
    this->hire_date = Date(date,month,year);
}

int employee::get_age() {
    return age;
}

void employee::set_age(int age) {
    this->age = age;
}

char employee::get_gender() {
    return gender;
}

void employee::set_gender(char gender) {
    this->gender = gender;
}

int employee::get_id() {
    return id;
}

void employee::set_id(int id) {
    this->id = id;
}

string employee::get_name() {
    return name;
}

void employee::set_name(string name) {
    this->name = name;
}

string employee::get_phone() {
    return phone;
}

void employee::set_title(string title) {
    this->title = title;
}

string employee::get_title() {
    return title;
}

void employee::set_phone(string phone) {
    this->phone = phone;
}

int employee::get_salary() {
    return salary;
}

void employee::set_salary(int salary) {
    this->salary = salary;
}

void employee::print(){
    cout << name << "  " << id << "  " << phone << "  " << age << "  " << gender << "  " << title << "  " << salary << "  " << hire_date << "\n";
}

ostream & operator << (ostream &out, employee &c)
{
    out << c.name << "  " << c.id << "  " << c.phone << "  " << c.age << "  " << c.gender << "  " << c.title << "  " << c.salary << "  " << c.hire_date << "\n";
    return out;
}