#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
        string name;
        double chinese, math, english;
        cin >> name >> chinese >> math >> english;

        double average = (chinese + math + english) / 3.0;

        cout << left << setw(10) << name
            << right << setw(8) << chinese
            << setw(8) << math
            << setw(8) << english
            << setw(8) << average;

        if (average >= 90) {
            cout << " Excellent";
        }
        cout << endl;
    }

    return 0;
}