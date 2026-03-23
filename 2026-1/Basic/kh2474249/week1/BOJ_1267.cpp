#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[20];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 30 == 0) { //영식 30초마다 10원
            res1 += (arr[i] / 30) + 1;
        }else {
            res1 += (arr[i] / 30) + 1;
        }

        if (arr[i] % 60 == 0) {
            res2 += (arr[i] / 60) + 1; //민식 60초마다 15원
        } else {
            res2 += (arr[i] / 60) + 1;
        }
    }

    int sum = 0;
    if (res1 * 10 > res2 * 15) {
        cout << "M " << res2 * 15 << endl;
        return 0;
    } else if (res1 * 10 < res2 * 15) {
        cout << "Y " << res1 * 10 << endl;
    } else if (res1 * 10 == res2 * 15) {
        cout << "Y M " << res1 * 10 << endl;
    }

    return 0;
}