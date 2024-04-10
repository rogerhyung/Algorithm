#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    while (1) {
        int flag = 0;
        cin >> s;
        if (s == "0") break;
        for (int i = 0; i < s.size() / 2; i++) { //문자열의 반까지 검사
            if (s[i] != s[s.size() - 1 - i]) { //문자열의 중심을 기준으로 바깥쪽부터 서로 대조
                cout << "no\n";
                flag = 1;
                break;
            }
        }
        if (!flag) cout << "yes\n";
    }
}
