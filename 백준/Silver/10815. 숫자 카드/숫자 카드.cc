#include<iostream>
#include<algorithm>
using namespace std;
int N_array[500001] = { 0 };
int check(int top) {
	int m;
	cin >> m;
	int left = 0;
	int right = top-1;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (N_array[mid] == m) {
			return 1;
		}
		if (N_array[mid] > m) {
			right = mid - 1;
		}
		else
			left = mid + 1;

	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> N_array[i];
	int M;
	cin >> M;

	sort(N_array, N_array + N);

	while (M--) {
		cout << check(N)<<" ";
	}
	return 0;

}