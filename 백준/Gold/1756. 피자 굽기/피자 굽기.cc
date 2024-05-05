//주석 처리된 부분으로 제출했더니 어떻게 해도 시간초과가 떴습니다. 아마 시간 복잡도가 n*d로 잡혀서 그런거 같습니다.
//인터넷을 참고해서 다시 풀어봤습니다. 

/*
#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int D;//깊이수
	int N;//반죽수
	cin >> D >> N; //깊이수, 반죽수 입력
	long* oven = new long[D + 1];
	oven[D] = 0; //바닥만들기 
	long pizza;

	for (int i = 0; i < D; i++) { //오븐 지름 입력 최상층 부터 점점 아래로 
		cin >> oven[i];
	}

	while (N--) { //반죽수 N번 동안 반복		
		cin >> pizza; //반죽 지름 입력 

		if (oven[0] < pizza) {
			cout << 0;
			return 0;
		}
		for (int i = 0; i < D + 1; i++) { //반죽보다 작은 지름 윗층 지름 0으로 만들기 
			if (pizza > oven[i]) {
				oven[i - 1] = 0;
			}
		}

	}
	if (N == 0) {
		for (int j = 0; j < D; j++) {
			if (oven[j] == 0) {
				cout << j;
				return 0;
			}
		}
	}

}
*/

#include<iostream>
using namespace std;
int main() {
	int d, n, reslult = 0;
	int D[300000] = { 0 };
	int pizza[300000] = { 0 };
	int visited[300000] = { 0 };//각 피자당 당도한 곳 기록

	cin >> d>> n;
	for (int i = 0; i < d; i++) {
		cin >> D[i];
		if ((i > 0) && (D[i - 1] < D[i]))
			D[i] = D[i - 1];
	}
	for (int i = 0; i < n; i++)
		cin >> pizza[i];

	int cnt = 0;
	for (int i = d-1; i >= 0; i--) {
		if (pizza[cnt] <= D[i]) {//피자가 화덕보다 작다면 
			visited[cnt] = i + 1;//
			cnt++;
		}
		if (cnt == n)
			break;
	}
	
	if (cnt == n)
		cout << visited[cnt - 1] << endl;
	else
		cout << 0 << endl;
	return 0;
}