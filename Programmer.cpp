#include "Programmer.h"

string print_bool(bool value){
    if(value){
        return "Yes";
    } else {
        return "No";
    }
}

Programmer::Programmer() {
}

Programmer::Programmer(string name, int id, string phone, int age, char gender, string title, int salary, int date,
                       int month, int year, int dept, string super, int raise, bool cpp, bool java) : employee(name,id,phone,age,gender,title,salary,date,month,year) {
    this->department = dept;
    this->supervisor = super;
    this->raise = raise;
    this->cpp = cpp;
    this->java = java;
}

int Programmer::get_department() {
    return department;
}

void Programmer::set_department(int dept) {
    this->department = dept;
}

int Programmer::get_raise() {
    return raise;
}

void Programmer::set_raise(int raise) {
    this->raise = raise;
}

string Programmer::get_supervisor() {
    return supervisor;
}

void Programmer::set_supervisor(string super) {
    this->supervisor = super;
}

bool Programmer::get_cpp() {
    return cpp;
}

void Programmer::set_cpp(bool cpp) {
    this->cpp = cpp;
}

bool Programmer::get_java() {
    return java;
}

void Programmer::set_java(bool java) {
    this->java = java;
}

void Programmer::print(){
    employee::print();
    cout << get_name() << "  " << department << "  " << supervisor << "  " << raise << "  " << print_bool(cpp) << " " << print_bool(java) << "\n";
}