#include<iostream>
#include<algorithm>
using namespace std;

long A[100001];
int N, M;

void binary_search(long input) {
	int left = 0;
	int right = N - 1;
	int middle = 0;

	while (left <= right) {
		middle = (left + right) / 2;
		if (A[middle] == input) {
			cout <<"1" << '\n';
			return;
		}
		else if (A[middle] < input)
			left = middle + 1;
		else
			right = middle - 1;
	}

	cout<<"0"<<'\n';
	return;

}

int main() {
	ios_base::sync_with_stdio(0); //stream의 입력과 출력동기화 비활성화 
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A, A + N);

	cin >> M;
	long input = 0;
	for (int i=0; i < M; i++) {
		cin >> input;
		binary_search(input);
	}

	return 0;
}