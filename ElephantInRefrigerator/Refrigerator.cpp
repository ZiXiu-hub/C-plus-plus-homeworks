#include "Refrigerator.h"
#include <iostream>

Refrigerator::Refrigerator(const std::string& fridgeBrand)
    : brand(fridgeBrand), isDoorOpen(false), content(nullptr) {
}

void Refrigerator::openDoor() {
    isDoorOpen = true;
    std::cout << brand << "冰箱的门被打开了。" << std::endl;
}

void Refrigerator::closeDoor() {
    isDoorOpen = false;
    std::cout << brand << "冰箱的门被关上了。" << std::endl;
}

bool Refrigerator::putIn(Elephant& anElephant) {
    if (!isDoorOpen) {
        std::cout << "失败：冰箱门关着，无法放入大象。" << std::endl;
        return false;
    }
    if (content != nullptr) {
        std::cout << "失败：冰箱里已经有一只大象了！" << std::endl;
        return false;
    }
    content = &anElephant;
    std::cout << "成功将大象 " << anElephant.getName() << " 装进了 " << brand << " 冰箱！" << std::endl;
    return true;
}

void Refrigerator::displayStatus() const {
    std::cout << "--- " << brand << "冰箱状态 ---" << std::endl;
    std::cout << "门状态: " << (isDoorOpen ? "开" : "关") << std::endl;
    if (content != nullptr && isDoorOpen) {
        std::cout << "内容物: 一只名叫 " << content->getName() << " 的大象" << std::endl;
    }
    else {
        std::cout << "内容物: 空" << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}