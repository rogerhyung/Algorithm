#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int l = str.length();

	for (int i = 0; i < l; i++) {
		if (str[i] < 90)
			str[i] = str[i] + 32;
		else
			str[i] = str[i] - 32;
	}
	cout << str;
}