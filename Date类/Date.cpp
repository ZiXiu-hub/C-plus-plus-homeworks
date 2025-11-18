#include "Date.h"
#include <iostream>
#include <stdexcept>

using namespace std;


Date::Date(int y, int m, int d) {
    Init(y, m, d);
}


void Date::Init(int y, int m, int d) {
    setYear(y);
    setMonth(m);
    setDay(d);

    if (!isValidDate()) {
        throw invalid_argument("无效的日期！");
    }
}


int Date::getYear() const { return year; }
int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }


void Date::setYear(int y) {
    if (y < 0) throw invalid_argument("年份不能为负数");
    year = y;
}

void Date::setMonth(int m) {
    if (m < 1 || m > 12) throw invalid_argument("月份必须在1-12之间");
    month = m;
}

void Date::setDay(int d) {
    if (d < 1 || d > 31) throw invalid_argument("日期必须在1-31之间");
    day = d;
}


bool Date::isLeapYear() const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int Date::getDaysInMonth() const {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeapYear()) {
        return 29;
    }
    return daysInMonth[month - 1];
}


bool Date::isValidDate() const {
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > getDaysInMonth()) return false;
    return true;
}


void Date::display() const {
    string weekdays[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
    cout << year << "年" << month << "月" << day << "日 " << weekdays[calWeekday()] << endl;
}


int Date::calWeekday() const {
    int y = year;
    int m = month;
    int d = day;


    if (m == 1 || m == 2) {
        m += 12;
        y--;
    }

    int weekday = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400 + 1) % 7;

    return weekday;
}