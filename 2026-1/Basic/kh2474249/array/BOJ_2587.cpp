#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int inputarr[5];
    int avg = 0;
    int mid = 0;
    for (int i = 0; i < 5; i++) {
        cin >> inputarr[i];
        avg += inputarr[i];
    }

    sort(inputarr, inputarr + 5);
    mid = inputarr[2];
    cout << avg / 5 << endl;
    cout << mid << endl;
    return 0;
}