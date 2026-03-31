#include <iostream>
using namespace std;

int main() {
    int marr[7];
    int warr[7];
    for (int i = 0; i < 7; i++) {
        marr[i] = 0;
        warr[i] = 0;
    }
    int input1 = 0;
    int input2 = 0;
    cin >> input1 >> input2;
    int age = 0;
    for (int i = 0; i < input1; i++) {
        int mf = 0;
        cin >> mf;
        if (mf == 1) {
            cin >> age;
            marr[age]++;
        } else {
            cin >> age;
            warr[age]++;
        }
    }
    int res = 0;
    for (int i = 1; i <= 6; i++) {
        if (marr[i] % input2 == 0) {
            res += marr[i] / input2;
        } else {
            res += marr[i] / input2 + 1;
        }
        if (warr[i] % input2 == 0) {
            res += warr[i] / input2;
        } else {
            res += warr[i] / input2 + 1;
        }
    }
    cout << res << endl;
    return 0;
}

//예술과의삶과치유적미술활동