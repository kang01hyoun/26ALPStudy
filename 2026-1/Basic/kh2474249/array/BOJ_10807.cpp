#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[101];
    int count[201];

    for (int i = 1; i <= 201; i++) {
        count[i] = 0;
    }

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        count[arr[i]+100]++;
    }

    int v;
    cin >> v;
    cout << count[v+100] << endl;
    return 0;
}