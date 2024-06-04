#include<iostream>
using namespace std;

int a[100] = { 0 };
int priority[10] = { 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int test_case = 0;
	int N = 0;
	int M = 0;
	int highist_priority = 0;
	int count = 0;
	int coin = 0;
	int temp;
	cin >> test_case;
	while (test_case--) {
		cin >> N >> M;
		for (int i = 0; i < 10; i++) {
			priority[i] = 0;
		}
		for (int i = 0; i < N; i++) {
			cin >> temp;
			a[i] = temp;
			priority[temp]++;
		}
		count = 0;
		coin = 0;
		int j = 0;
		while(true) {
			for (int k = 1; k <10; k++) {
				if (priority[k] > 0)
					highist_priority = k;
			}			
				if (a[j] == highist_priority) {
					a[j] = 0;
					priority[highist_priority]--;
					count++;
					if (j == M) {
						cout << count<<endl;
						coin = 1;
						break;
					}
				}

				j++;
				j = j % N;
			

		}

	}
	return 0;
}