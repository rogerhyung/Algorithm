#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	int temp = 0;
	for (int N = 1; N <= 10000; N++) {
		for (int i = 1; i <= N; i++) {
			sum = 0;
			temp = i;
			while (temp != 0) {
				sum = sum + (temp % 10);
				temp = temp / 10;
			}
			if (N == (sum + i))
				break;
			if (i == N)
				cout << N<<endl;
		}
	}
	return 0;
}