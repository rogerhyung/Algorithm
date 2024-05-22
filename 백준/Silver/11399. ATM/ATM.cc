#include<iostream>
#include<algorithm>
using namespace std;

int a[1000] = { 0 };

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a, a + N);
	int sum = 0;
	for (int j = 0; j < N; j++) {
		for (int k = 0; k <= j; k++)
			sum = sum + a[k];
	}
	cout << sum;

	return 0;
}
