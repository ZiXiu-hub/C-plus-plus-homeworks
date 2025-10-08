#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include <string>
#include "Elephant.h" // 包含Elephant类，因为Refrigerator依赖于Elephant

class Refrigerator {
private:
    std::string brand;
    bool isDoorOpen;
    Elephant* content; // 指针，指向冰箱里装的大象（如果有的话）
public:
    Refrigerator(const std::string& fridgeBrand);
    void openDoor();
    void closeDoor();
    bool putIn(Elephant& anElephant); // 尝试把大象装进去
    void displayStatus() const;
};

#endif
