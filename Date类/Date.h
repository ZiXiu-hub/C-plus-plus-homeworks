
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date {
private:
    int year;
    int month;
    int day;

public:

    Date(int y = 2000, int m = 1, int d = 1);


    void Init(int y, int m, int d);

    int getYear() const;
    int getMonth() const;
    int getDay() const;


    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);


    void display() const;
    int calWeekday() const;
    bool isValidDate() const;


    bool isLeapYear() const;
    int getDaysInMonth() const;
};

#endif