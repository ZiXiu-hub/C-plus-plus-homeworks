#include "Triangle.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== 三角形类测试程序 ===" << endl;

    try {
        // 测试1：直角三角形
        Triangle tri1(3, 4, 5);
        cout << "测试1 - 直角三角形:" << endl;
        tri1.displayInfo();

        // 测试2：锐角三角形
        Triangle tri2(5, 6, 7);
        cout << "测试2 - 锐角三角形:" << endl;
        tri2.displayInfo();

        // 测试3：钝角三角形
        Triangle tri3(2, 3, 4);
        cout << "测试3 - 钝角三角形:" << endl;
        tri3.displayInfo();

        // 测试4：等边三角形
        Triangle tri4(6, 6, 6);
        cout << "测试4 - 等边三角形:" << endl;
        tri4.displayInfo();

        // 测试5：无效三角形
        try {
            Triangle tri5(1, 2, 10);
            cout << "测试5 - 无效三角形:" << endl;
            tri5.displayInfo();
        }
        catch (const exception& e) {
            cout << "测试5 - 正确捕获异常: " << e.what() << endl;
        }

        // 测试set/get函数
        Triangle tri6;
        tri6.setSideA(7.5);
        tri6.setSideB(8.2);
        tri6.setSideC(9.1);
        cout << "测试6 - 设置边长:" << endl;
        cout << "边长A: " << tri6.getSideA() << endl;
        cout << "边长B: " << tri6.getSideB() << endl;
        cout << "边长C: " << tri6.getSideC() << endl;
        tri6.displayInfo();

    }
    catch (const exception& e) {
        cout << "程序错误: " << e.what() << endl;
    }

    return 0;
}