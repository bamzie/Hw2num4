//
//  TimeOff.hpp
//  Hw2num4
//
//  Created by Brian Morales on 1/15/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#ifndef TimeOff_hpp
#define TimeOff_hpp
#include <stdio.h>
#include "NumDays.h"

class TimeOff
{
private:
    NumDays sickTaken;
    NumDays vacTaken;
    NumDays unpaidTaken;
    string emplName;
    string emplIdent;
    int month;
    int vacay;
    int sickleave;
    int unpaid;
    void calc()
    {
        vacay = month * 12;
        
        if(vacay > 240)
            vacay = 240;
        sickleave = month * 8;
        unpaid = month * 14;
        
    }
public:
    TimeOff()
    {
        emplName = "";
        emplIdent = "";
    }
    
    TimeOff(string name, string ident)
    {
        emplIdent = ident;
        emplName = name;
    }
    
    void setname(string name)
    {   emplName = name;    }
    
    void setident(string ident)
    {   emplIdent = ident;  }
    
    
    void setMonths(int m)
    {   month = m;  }
    
    void setsicktaken(int st)
    {
        sickTaken.setHours(st);
    }
    
    void setvactaken(int vt)
    {
        vacTaken.setHours(vt);
    }
    
    void setunpaidTaken(int ut)
    {
        unpaidTaken.setHours(ut);
    }
    
    int maxSickDays()
    {
        calc();
        return sickleave;
    }
    
    int maxUnpaid()
    {
        calc();
        return unpaid;
    }
    
    int maxVacation()
    {
        calc();
        return vacay;
    }
    
    string getname()
    {   return emplName;    }
    
    string getident()
    {   return emplIdent;   }
    
    double getsickTaken()
    {   return sickTaken.getDays(); }
    
    double getvacTaken()
    {   return vacTaken.getDays();  }
    
    double getunpaidTaken()
    {   return unpaidTaken.getDays();   }
    
    int getMonth() const
    {   return month;   }
    
    
};

#endif /* TimeOff_hpp */
