#include "SoftwareArchitect.h"
#include "Programmer.h"
#include <stdlib.h>

SoftwareArchitect::SoftwareArchitect() {
}

SoftwareArchitect::SoftwareArchitect(string name, int id, string phone, int age, char gender, string title, int salary, int date,
                       int month, int year, int dept, string super, int raise, int experience) : employee(name,id,phone,age,gender,title,salary,date,month,year) {
    this->department = dept;
    this->supervisor = super;
    this->raise = raise;
    this->experience = experience;
}

int SoftwareArchitect::get_department() {
    return department;
}

void SoftwareArchitect::set_department(int dept) {
    this->department = dept;
}

int SoftwareArchitect::get_raise() {
    return raise;
}

void SoftwareArchitect::set_raise(int raise) {
    this->raise = raise;
}

int SoftwareArchitect::get_experience() {
    return experience;
}

void SoftwareArchitect::set_experience(int experience) {
    this->experience = experience;
}


string SoftwareArchitect::get_supervisor() {
    return supervisor;
}

void SoftwareArchitect::set_supervisor(string super) {
    this->supervisor = super;
}

void SoftwareArchitect::print(){
    employee::print();
    cout << get_name() << "  " << department << "  " << supervisor << "  " << raise << "  " << experience << "\n";
}

void SoftwareArchitect::addition(int num){
    this->set_age(get_age() + num);
    cout << num << " years were added to " << get_name() << "'s age\n";
}

SoftwareArchitect SoftwareArchitect::operator+(int num){
    this->set_age(this->get_age() + num);
    cout << num << " years were added to " << this->get_name() << "'s age\n";
    return *this;
}

ostream & operator << (ostream &out, SoftwareArchitect &c)
{
    out << c.get_name() << "  " << c.get_id() << "  " << c.get_phone() << "  " << c.get_age() << "  " << c.get_gender() << "  " << c.get_title() << "  " << c.get_salary() << "  " << "\n" ;
    out << c.get_name() << "  " << c.department << "  " << c.supervisor << "  " << c.raise << "  " << c.experience << "\n";
    return out;
}

istream & operator >> (istream &in,  SoftwareArchitect &c)
{
    string input;
    int integer;

    cout << "Enter Name: ";
    in >> input;
    c.set_name(input);

    cout << "Enter Id: ";
    in >> integer;
    c.set_id(integer);

    cout << "Enter phone number: ";
    in >> input;
    c.set_phone(input);

    cout << "Enter age: ";
    in >> integer;
    c.set_age(integer);

    cout << "Enter gender: ";
    in >> input;
    c.set_gender(input.front());

    cout << "Enter title: ";
    in >> input;
    c.set_title(input);

    cout << "Enter Salary: ";
    in >> integer;
    c.set_salary(integer);

    cout << "Enter department: ";
    in >> c.department;

    cout << "Enter supervisor: ";
    in >> c.supervisor;

    cout << "Enter raise: ";
    in >> c.raise;

    cout << "Enter experience: ";
    in >> c.experience;

    return in;
}

SoftwareArchitect SoftwareArchitect::operator++()
{
    this->set_age(this->get_age() + 1);
    return *this;
}

// Post-increment Operator
const SoftwareArchitect SoftwareArchitect::operator++(int)
{
    const SoftwareArchitect old(*this);
    ++(*this);
    return old;
}

bool compare_phone(Programmer &programmer, SoftwareArchitect &architect){
    if(programmer.get_phone() == architect.get_phone()){
        return true;
    }
    return false;
}

bool SoftwareArchitect::operator==(SoftwareArchitect other){
    if(this->get_phone() == other.get_phone()){
        return true;
    }
    return false;
}
