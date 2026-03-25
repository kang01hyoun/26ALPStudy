#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    for (int i = 1; i <= year; i++) {
        for (int j = 0; j < year - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
