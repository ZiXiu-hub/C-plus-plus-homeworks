#include "card_operations.h"
#include <iomanip>
#include <iostream>

namespace card {
    void printLine(char c, int len) {
        for (int i = 0; i < len; ++i) std::cout << c;
        std::cout << std::endl;
    }

    void title(const std::string& s) {
        std::cout << "\n====" << s << "====\n";
    }
}

Card* createCards(int n) {
    try {
        Card* p = new Card[n];
        return p;
    }
    catch (const std::bad_alloc& e) {
        std::cerr << "内存分配失败:" << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }
}

void destroyCards(Card* p) {
    delete[] p;
}

void inputCards(Card* arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "请输入学号、姓名和初始余额:";
        try {
            std::cin >> arr[i].id >> arr[i].name >> arr[i].balance;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                throw std::runtime_error("输入格式错误，请输入正确的数据类型。");
            }

            if (arr[i].balance < 0) {
                throw std::invalid_argument("初始余额不能为负数!");
            }

            arr[i].transactions = 0;
        }
        catch (const std::exception& e) {
            std::cout << "输入异常:" << e.what() << std::endl;
            i--;
        }
    }
}

void deposit(Card& c, double amount, double fee) {
    c.balance += amount * (1.0 - fee);
    c.transactions++;
}

bool spend(Card& c, double cost) {
    if (c.balance >= cost) {
        c.balance -= cost;
        c.transactions++;
        return true;
    }
    return false;
}

bool spend(Card& c, double cost, const std::string& item) {
    std::cout << "消费项目:" << item << std::endl;
    try {
        if (cost < 0) throw std::invalid_argument("消费金额不能为负数!");
        if (c.balance < cost) throw std::runtime_error("余额不足，消费失败!");

        c.balance -= cost;
        c.transactions++;
        return true;
    }
    catch (const std::exception& e) {
        std::cout << "异常提示:" << e.what() << std::endl;
        return false;
    }
}

void showBalance(const Card& c) {
    std::cout << c.name << "当前余额为:" << c.balance << std::endl;
}

void viewStudentID(const Card* p) {
    std::cout << "账户ID为:" << p->id << std::endl;
}

int toCent(double amount) {
    return static_cast<int>(amount * 100);
}

void printReport(const Card* arr, int n) {
    using card::printLine;
    printLine('=');
    std::cout << std::left << std::setw(8) << "ID"
        << std::setw(12) << "Name"
        << std::right << std::setw(14) << "Balance"
        << std::setw(14) << "Transactions" << std::endl;
    printLine('-');

    std::cout.setf(std::ios::fixed);
    std::cout << std::setprecision(2);

    for (int i = 0; i < n; ++i) {
        std::cout << std::left << std::setw(8) << arr[i].id
            << std::setw(12) << arr[i].name
            << std::right << std::setw(14) << arr[i].balance
            << std::setw(14) << arr[i].transactions << std::endl;
    }
    printLine('=');
}