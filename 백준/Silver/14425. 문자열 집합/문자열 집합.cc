#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	string element;
	int M;
	int count = 0;
	cin >> N>>M;

	unordered_set<string> S;
	for (int i = 0; i < N; i++) {
		cin >> element;
		S.insert(element);
	}
;
	for (int i = 0; i < M; i++) {
		cin >> element;
		if (S.find(element) != S.end())
			count++;	

	}
	cout << count;
	return 0;
}