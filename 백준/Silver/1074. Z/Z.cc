//이해가 잘 안되서 인터넷과 유튜브보고 풀었습니다.

#include<iostream>
using namespace std;
int result = 0;
int n = 0, c = 0, r = 0;
void z(int y, int x, int d) {
	
	if (y == r && x == c) {
		cout << result << endl;
		return;
	}

	if (r < y + d && r >= y && c < x + d && c >= x) {
		z(y, x, d / 2);
		z(y, x + d / 2, d / 2);
		z(y + d / 2, x, d / 2);
		z(y + d / 2, x + d / 2, d / 2);
	}
	else
		result = result + d * d;
}
int main() {

	cin >> n >> r >> c;
	int d = 1;
	for (int i = 0; i < n; i++) {
		d = d * 2;
	}

	z(0, 0, d);


	return 0;
}