#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) { //n개의 카드 입력
		cin >> arr[i];
	}

	int result = 0; //결과 값
	int sum = 0; //카드의 합

	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n - 1; j++) { //j는 i+1 이기에 1에서 시작
			for (int k = j+1; k < n; k++) { // k는 j+1이기에 2에서 시작.
				sum = arr[i] + arr[j] + arr[k]; //3개 카드의 합
				if (sum > result && sum <= m) result = sum; //카드의 합이 이전카드의 합보다 크고 최대값 m 보다 결과 값 교체
			}
		}
	}

	cout << result;

	return 0;
}