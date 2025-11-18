#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cmath>

class Triangle {
private:
    double a, b, c;

public:
    // 构造函数
    Triangle(double sideA = 3.0, double sideB = 4.0, double sideC = 5.0);

    // 初始化函数
    void Init(double sideA, double sideB, double sideC);

    // 读取函数
    double getSideA() const;
    double getSideB() const;
    double getSideC() const;

    // 设置函数
    void setSideA(double side);
    void setSideB(double side);
    void setSideC(double side);

    // 功能函数
    bool isTriangle() const;
    double perimeter() const;
    double area() const;
    int typeTriangle() const;
    void displayInfo() const;

    // 辅助函数
    void sortSides() const;
    double getMaxSide() const;
};

#endif
