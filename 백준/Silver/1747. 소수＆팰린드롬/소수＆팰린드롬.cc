#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

bool is_prime(int x) {
	if (x < 2)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;	
}

bool is_palindrome(string y) {
	string a = y;
	reverse(y.begin(), y.end());
	if (a == y)
		return true;
	return false;
}
int main() {
	int N = 0;
	cin >> N;
	while (true) {
		if (is_prime(N) && is_palindrome(to_string(N))) {
			cout << N;
			return 0;
		}
		N++;
	}
	
}
