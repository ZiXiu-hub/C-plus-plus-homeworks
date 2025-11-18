#include "card_operations.h"
#include <iostream>
#include <cstdlib>

const double FEE_RATE = 0.02;
const double WARNING_BALANCE = 10.0;

int main() {
    using card::title;
    using card::printLine;

    title("Campus Card System");

    int n;
    std::cout << "请输入学生数量:";
    std::cin >> n;

    Card* users = createCards(n);
    inputCards(users, n);

    // 测试功能
    deposit(users[0], 100.0);
    spend(users[0], 8.5, "食堂午餐");

    showBalance(users[0]);
    viewStudentID(&users[0]);

    std::cout << "换算为分:" << toCent(users[0].balance) << std::endl;

    printReport(users, n);
    destroyCards(users);

    system("pause");
    return 0;
}