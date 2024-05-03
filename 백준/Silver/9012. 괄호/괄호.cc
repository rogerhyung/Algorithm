#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	string* str = new string[T];
	for (int i = 0; i < T; i++) {
		cin >> str[i];
	}
	int len;
	for(int i=0; i<T;i++){
		len = str[i].length();
		int bracket = 0;
		for (int j = 0; j < len; j++) {
			if (str[i][j] == '(')
				bracket++;
			if (str[i][j] == ')')
				bracket--;
			if (bracket<0) {
				cout << "NO"<<endl;
				break;
			}			
		}
		if (bracket==0)
			cout << "YES"<<endl;
		else if (bracket >0) {
			cout << "NO" << endl;
		}
		
	}
	return 0;
}