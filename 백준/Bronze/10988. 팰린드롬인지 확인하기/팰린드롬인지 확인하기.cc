#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int l = str.length();
	for (int i = 0; i < (l / 2); i++) {
		if (str[i] != str[l - i - 1]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
