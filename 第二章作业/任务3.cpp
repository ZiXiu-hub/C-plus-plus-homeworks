#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// ������������ƽ��
inline double square(double x) {
    return x * x;
}

// ��Ĭ�ϲ����ĳ��ݺ���
double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    double num;
    int exp;

    cout << "������һ������: ";
    cin >> num;
    cout << "������ָ��(��ѡ��Ĭ��2): ";

    // �������룬�������ʧ����ʹ��Ĭ��ֵ
    if (!(cin >> exp)) {
        cin.clear();
        cin.ignore(100, '\n');
        exp = 2; // ʹ��Ĭ��ֵ
    }

    cout << fixed << setprecision(2);
    cout << "ƽ��: " << square(num) << endl;
    cout << "����: " << power(num, exp) << endl;

    return 0;
}