#ifndef CARD_OPERATIONS_H
#define CARD_OPERATIONS_H

#include <iostream>
#include <string>
#include <stdexcept>

struct Card {
    int id;
    std::string name;
    double balance;
    int transactions;
};

namespace card {
    void printLine(char c = '-', int len = 60);
    void title(const std::string& s);
}

Card* createCards(int n);
void destroyCards(Card* p);
void inputCards(Card* arr, int n);
void deposit(Card& c, double amount, double fee = 0.02);
bool spend(Card& c, double cost);
bool spend(Card& c, double cost, const std::string& item);
void showBalance(const Card& c);
void viewStudentID(const Card* p);
int toCent(double amount);
void printReport(const Card* arr, int n);

#endif
