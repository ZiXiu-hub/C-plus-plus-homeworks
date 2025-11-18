#include "Triangle.h"
#include <iostream>
#include <stdexcept>
#include <algorithm>

using namespace std;

// 构造函数
Triangle::Triangle(double sideA, double sideB, double sideC) {
    Init(sideA, sideB, sideC);
}

// 初始化函数
void Triangle::Init(double sideA, double sideB, double sideC) {
    setSideA(sideA);
    setSideB(sideB);
    setSideC(sideC);

    if (!isTriangle()) {
        throw invalid_argument("这三条边不能构成三角形！");
    }
}

// 读取函数
double Triangle::getSideA() const { return a; }
double Triangle::getSideB() const { return b; }
double Triangle::getSideC() const { return c; }

// 设置函数
void Triangle::setSideA(double side) {
    if (side <= 0) throw invalid_argument("边长必须大于0");
    a = side;
}

void Triangle::setSideB(double side) {
    if (side <= 0) throw invalid_argument("边长必须大于0");
    b = side;
}

void Triangle::setSideC(double side) {
    if (side <= 0) throw invalid_argument("边长必须大于0");
    c = side;
}

// 判断是否能构成三角形
bool Triangle::isTriangle() const {
    return (a + b > c) && (a + c > b) && (b + c > a) &&
        (a > 0) && (b > 0) && (c > 0);
}

// 计算周长
double Triangle::perimeter() const {
    return a + b + c;
}

// 计算面积（海伦公式）
double Triangle::area() const {
    if (!isTriangle()) return 0.0;

    double p = perimeter() / 2.0;  // 半周长
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// 排序边长（辅助函数）
void Triangle::sortSides() const {
    double sides[] = { a, b, c };
    sort(sides, sides + 3);
}

// 获取最大边长
double Triangle::getMaxSide() const {
    return max({ a, b, c });
}

// 判断三角形类型
int Triangle::typeTriangle() const {
    if (!isTriangle()) return -1;  // 不是三角形

    double sides[] = { a, b, c };
    sort(sides, sides + 3);  // 升序排序

    double a2 = sides[0] * sides[0];
    double b2 = sides[1] * sides[1];
    double c2 = sides[2] * sides[2];

    const double EPSILON = 1e-6;  // 浮点数比较容差

    if (abs(a2 + b2 - c2) < EPSILON) {
        return 1;  // 直角三角形
    }
    else if (a2 + b2 > c2) {
        return 2;  // 锐角三角形
    }
    else {
        return 3;  // 钝角三角形
    }
}

// 显示三角形信息
void Triangle::displayInfo() const {
    cout << "三角形边长: " << a << ", " << b << ", " << c << endl;
    cout << "能否构成三角形: " << (isTriangle() ? "是" : "否") << endl;

    if (isTriangle()) {
        cout << "周长: " << perimeter() << endl;
        cout << "面积: " << area() << endl;

        string types[] = { "无效", "直角", "锐角", "钝角" };
        int type = typeTriangle();
        cout << "三角形类型: " << types[type] << "三角形" << endl;
    }
    cout << "------------------------" << endl;
}