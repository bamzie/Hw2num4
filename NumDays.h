//
//  NumDays.hpp
//  Hw2num4
//
//  Created by Brian Morales on 1/15/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#ifndef NumDays_hpp
#define NumDays_hpp
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class NumDays
{
private:
    int hours;
    double track = 8;
    double days;
    void convert()
    {
        if (hours > 0)
            days = hours / track;
        else
            days = abs(hours) / track;
    }
public:
    NumDays()
    {
        hours = 0;
    }
    
    NumDays(int i)
    {
        hours = i;
        convert();
    }
    
    void setHours(int i)
    {
        hours = i;
        convert();
    }
    
    int getHours()
    {   return hours;   }
    
    double getDays()
    {   convert();
        return days;
    }
    
    void print()
    {
        cout << fixed << showpoint << setprecision(2) << "Employee worked "<< days << " days" << endl;
    }
    
    NumDays operator+ (const NumDays &right)
    {
        NumDays temp;
        temp.hours = hours + right.hours;
        temp.convert();
        return temp;
    }
    
    NumDays operator- (const NumDays &right)
    {
        NumDays temp;
        temp.hours = hours - right.hours;
        temp.convert();
        return temp;
    }
    
    void operator++ ()
    {
        ++hours;
        convert();
    }
    void operator++ (int)
    {
        hours++;
        convert();
    }
    void operator-- ()
    {
        --hours;
        convert();
    }
    
    void operator-- (int)
    {
        hours--;
        convert();
    }
    
};

#endif /* NumDays_hpp */
