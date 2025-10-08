#include "Operation.h"
#include "Elephant.h"
#include "Refrigerator.h"
#include <iostream>

void demonstrateElephantInFridge() {
    std::cout << "\n======= 开始演示：把大象装进冰箱 =======\n" << std::endl;

    // 1. 创建对象
    Elephant dumbo("Dumbo", 5000);
    Refrigerator haierFridge("Haier");

    // 2. 展示初始状态
    dumbo.introduce();
    haierFridge.displayStatus();

    // 3. 执行“装大象”的步骤
    std::cout << "\n【步骤一：打开冰箱门】" << std::endl;
    haierFridge.openDoor();

    std::cout << "\n【步骤二：把大象装进去】" << std::endl;
    bool isSuccess = haierFridge.putIn(dumbo);

    std::cout << "\n【步骤三：关上冰箱门】" << std::endl;
    haierFridge.closeDoor();

    // 4. 展示最终状态
    std::cout << "\n演示结束，最终状态：" << std::endl;
    haierFridge.displayStatus();

    std::cout << "======= 演示结束 =======\n" << std::endl;
}