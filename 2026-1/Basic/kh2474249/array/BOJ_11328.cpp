#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int input;
    cin >> input;

    for (int i = 0; i < input; i++) {
        char str1[1001];
        char str2[1001];

        cin >> str1 >> str2;

        if (strlen(str1) != strlen(str2)) {
            cout<<"Impossible"<<endl;
            continue;
        }

        int start[26];
        int end[26];
        for (int j = 0; j < 26; j++) {
            end[j] = 0;
            start[j] = 0;
        }

        for (int j = 0; j < strlen(str1); j++) {
            start[str1[j] - 'a']++;
            end[str2[j] - 'a']++;
        }

        int flag = 1;

        for (int j = 0; j < 26; j++) {
            if (start[j] != end[j]) {
                flag = 0;
            }
        }

        if (flag == 0) {
            cout<<"Impossible"<<endl;
        } else {
            cout<<"Possible"<<endl;
        }

    }

    return 0;

}