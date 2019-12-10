#include <iostream>
#include "employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"

int main() {

    Programmer programmer1("Jimmy Fallon", 12345,"949-555-1234",40,'M',"Comedian",100000, 31,8,2014, 5432122, "Joe Boss", 4 , true, false);

    SoftwareArchitect architect1("Jimmy Fallon", 12345,"949-555-1234",40,'M',"Comedian",100000, 31,8,2014, 5432122, "Joe Boss", 4 ,7);
    SoftwareArchitect architect_oth("Jimmy Fallon", 12345,"949-555-1234",40,'M',"Comedian",100000, 31,8,2014, 5432122, "Joe Boss", 4 ,7);


    cout << "Testing compare method \n";
    if(compare_phone(programmer1, architect1)){
        cout << "Test 1 passed \n";
    } else {
        cout << "Test 1 failed \n";
    }

    programmer1.set_phone("1212-1212-58-76");
    if(!compare_phone(programmer1, architect1)){
        cout << "Test 2 passed \n";
    } else {
        cout << "Test 2 failed \n";
    }

    cout << "\nTesting == operator \n";
    if(architect_oth == architect1){
        cout << "Test 1 passed \n";
    } else {
        cout << "Test 1 failed \n";
    }

    architect_oth.set_phone("949-555-12345");
    if(architect_oth == architect1){
        cout << "Test 2 failed \n";
    } else {
        cout << "Test 2 passed \n";
    }

    cout << "\nTesting addition method \n";
    architect1.addition(12);
    cout << "\nTesting + operator \n";
    architect1 = architect1 + 2;
    architect1.print();

    cout << "\nTesting >> operator \n";
    //cin >> architect1;
    cout << "\nTesting << operator \n";
    cout << architect1;

    cout << "\nTesting pre/post increment operators \n";
    cout << "Before operators\n";
    cout << architect1;

    SoftwareArchitect architect2 = ++architect1;
    cout << "\nAfter pre increment\n";
    cout << architect1;
    cout << "\nAfter assignment , age increase is reflected in the assigned object\n";
    cout << architect2;

    SoftwareArchitect architect3 = architect1++;
    cout << "\nAfter post increment\n";
    cout << architect1;
    cout << "\nAfter assignment , age increase is not reflected in the assigned object\n";
    cout << architect3;

    return 0;
}