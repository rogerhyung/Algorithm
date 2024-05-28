#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n = 0;
	int x = 0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;

	int result = 0;

	sort(a, a + n);

	int left = 0;
	int right = n - 1;
	int sum = 0;

	while (left < right) {
		sum = a[left] + a[right];
		if (sum == x) {
			result++;
			left = left + 1;
			right = right - 1;
		}
		else if (sum > x) 
			right = right - 1;		
		else
			left = left + 1;
	}

	cout << result;
	delete[] a;
	return 0;
}