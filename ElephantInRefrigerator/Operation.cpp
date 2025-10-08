#include "Operation.h"
#include "Elephant.h"
#include "Refrigerator.h"
#include <iostream>

void demonstrateElephantInFridge() {
    std::cout << "\n======= ��ʼ��ʾ���Ѵ���װ������ =======\n" << std::endl;

    // 1. ��������
    Elephant dumbo("Dumbo", 5000);
    Refrigerator haierFridge("Haier");

    // 2. չʾ��ʼ״̬
    dumbo.introduce();
    haierFridge.displayStatus();

    // 3. ִ�С�װ���󡱵Ĳ���
    std::cout << "\n������һ���򿪱����š�" << std::endl;
    haierFridge.openDoor();

    std::cout << "\n����������Ѵ���װ��ȥ��" << std::endl;
    bool isSuccess = haierFridge.putIn(dumbo);

    std::cout << "\n�������������ϱ����š�" << std::endl;
    haierFridge.closeDoor();

    // 4. չʾ����״̬
    std::cout << "\n��ʾ����������״̬��" << std::endl;
    haierFridge.displayStatus();

    std::cout << "======= ��ʾ���� =======\n" << std::endl;
}