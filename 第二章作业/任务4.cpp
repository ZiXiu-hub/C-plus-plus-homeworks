#include <iostream>
using namespace std;

// ���ð汾��������
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// ���ذ汾��ֵ���ݣ�ʵ���ϲ���ı�ԭֵ�����ﰴ��ĿҪ��ʵ�֣�
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // ע�⣺����汾����Ӱ��main�����еı���
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Before swap: x=" << a << ", y=" << b << endl;

    // �������ð汾����ʵ�ʽ���
    swap(a, b);

    cout << "After swap: x=" << a << ", y=" << b << endl;

    return 0;
}