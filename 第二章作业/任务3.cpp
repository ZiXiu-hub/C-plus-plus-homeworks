#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 内联函数计算平方
inline double square(double x) {
    return x * x;
}

// 带默认参数的乘幂函数
double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    double num;
    int exp;

    cout << "请输入一个数字: ";
    cin >> num;
    cout << "请输入指数(可选，默认2): ";

    // 处理输入，如果输入失败则使用默认值
    if (!(cin >> exp)) {
        cin.clear();
        cin.ignore(100, '\n');
        exp = 2; // 使用默认值
    }

    cout << fixed << setprecision(2);
    cout << "平方: " << square(num) << endl;
    cout << "乘幂: " << power(num, exp) << endl;

    return 0;
}