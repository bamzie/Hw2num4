//
//  main.cpp
//  Hw2num4
//
//  Created by Brian Morales on 1/15/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "NumDays.h"
#include "TimeOff.h"
using namespace std;

int main()
{
    string name;
    string ident;
    int num;
    
    cout << "What is the name of your employee: ";
    cin >> name;
    
    cout << "What is his identification code: ";
    cin>> ident;
    
    TimeOff person(name, ident);
    
    cout << "How many months has he been working: ";
    cin >> num;
    person.setMonths(num);
    
    cout << "How many sick hours has he taken: ";
    cin >> num;
    person.setsicktaken(num);
    
    cout << "How many paid vacation hours has he taken: ";
    cin >> num;
    person.setvactaken(num);
    
    cout << "How many unpaid vacation hours has he taken: ";
    cin >> num;
    person.setunpaidTaken(num);
    
    cout << fixed << showpoint << setprecision(2)<< endl;
    
    cout << "-------------------------------------------" << endl;
    
    cout << "Employee: " << person.getname() << "\t Identification: " << person.getident() << endl;
    cout << "Unpaid Vaction taken: " <<  person.getunpaidTaken() << " days\n";
    cout << "Paid Vaction taken: " << person.getvacTaken() << " days\n";
    cout << "Sick leave taken: " << person.getsickTaken() << " days\n";
    
    cout << "Earned paid vacations: " << person.maxVacation() << " hours\n";
    cout << "Earned sick days: " << person.maxSickDays() << " hours\n";
    cout << "Earned unpaid vacations: " << person.maxUnpaid() << " hours \n";
}
