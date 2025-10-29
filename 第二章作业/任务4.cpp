#include <iostream>
using namespace std;

// 引用版本交换函数
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// 重载版本（值传递，实际上不会改变原值，这里按题目要求实现）
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // 注意：这个版本不会影响main函数中的变量
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Before swap: x=" << a << ", y=" << b << endl;

    // 调用引用版本进行实际交换
    swap(a, b);

    cout << "After swap: x=" << a << ", y=" << b << endl;

    return 0;
}