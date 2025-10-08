#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include <string>
#include "Elephant.h" // ����Elephant�࣬��ΪRefrigerator������Elephant

class Refrigerator {
private:
    std::string brand;
    bool isDoorOpen;
    Elephant* content; // ָ�룬ָ�������װ�Ĵ�������еĻ���
public:
    Refrigerator(const std::string& fridgeBrand);
    void openDoor();
    void closeDoor();
    bool putIn(Elephant& anElephant); // ���԰Ѵ���װ��ȥ
    void displayStatus() const;
};

#endif
