#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	long long M = 0;
	long long H = 0;
	long long sum = 0;
	long long left = 0;
	long long right = 1000000000;
	long long planB = 0;
	cin >> N >> M;

	long long* tree = new long long[N];

	for (int i = 0; i < N; i++)
		cin >> tree[i];

	while (left <= right) {
		H = (left + right) / 2;
		sum = 0;
		for (int j = 0; j < N; j++) {
			if (tree[j] > H)
				sum = sum + (tree[j] - H);
		}
		if (sum == M) {
			cout << H;
			delete[] tree;
			return 0;

		}
		else if (sum > M) {
			left = H + 1;
			if (planB < H)
				planB = H;
		}
		else
			right = H - 1;
	}
	cout <<planB;
	delete[] tree;
	return 0;

}