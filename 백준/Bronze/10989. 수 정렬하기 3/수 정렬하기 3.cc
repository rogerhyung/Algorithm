#include<iostream>
using namespace std;


int main() {
	int N = 0;
	int temp = 0;

	cin >> N;

	int a[10001] = { 0 };

	for (int i = 0; i < N; i++) {
		cin >> temp;
		a[temp]++;
	}



    for (int i = 0; i <10001; i++) {
		for (int j = 0; j < a[i]; j++)
			cout << i << '\n';
    }
	
    return 0;
  
}