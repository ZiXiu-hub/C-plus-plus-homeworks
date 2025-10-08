#include "Refrigerator.h"
#include <iostream>

Refrigerator::Refrigerator(const std::string& fridgeBrand)
    : brand(fridgeBrand), isDoorOpen(false), content(nullptr) {
}

void Refrigerator::openDoor() {
    isDoorOpen = true;
    std::cout << brand << "������ű����ˡ�" << std::endl;
}

void Refrigerator::closeDoor() {
    isDoorOpen = false;
    std::cout << brand << "������ű������ˡ�" << std::endl;
}

bool Refrigerator::putIn(Elephant& anElephant) {
    if (!isDoorOpen) {
        std::cout << "ʧ�ܣ������Ź��ţ��޷��������" << std::endl;
        return false;
    }
    if (content != nullptr) {
        std::cout << "ʧ�ܣ��������Ѿ���һֻ�����ˣ�" << std::endl;
        return false;
    }
    content = &anElephant;
    std::cout << "�ɹ������� " << anElephant.getName() << " װ���� " << brand << " ���䣡" << std::endl;
    return true;
}

void Refrigerator::displayStatus() const {
    std::cout << "--- " << brand << "����״̬ ---" << std::endl;
    std::cout << "��״̬: " << (isDoorOpen ? "��" : "��") << std::endl;
    if (content != nullptr && isDoorOpen) {
        std::cout << "������: һֻ���� " << content->getName() << " �Ĵ���" << std::endl;
    }
    else {
        std::cout << "������: ��" << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}