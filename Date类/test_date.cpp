#include "Date.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== 日期类测试程序 ===" << endl;

    try {

        Date date1(2025, 11, 20);
        cout << "测试日期1: ";
        date1.display();


        Date date2(2024, 2, 29);
        cout << "测试日期2: ";
        date2.display();


        Date date3;
        date3.Init(2025, 12, 31);
        cout << "测试日期3: ";
        date3.display();


        Date date4;
        date4.setYear(2026);
        date4.setMonth(6);
        date4.setDay(15);
        cout << "测试日期4: " << date4.getYear() << "-" << date4.getMonth()
            << "-" << date4.getDay() << endl;
        cout << "星期几: " << date4.calWeekday() << endl;

    }
    catch (const exception& e) {
        cout << "错误: " << e.what() << endl;
    }

    return 0;
}