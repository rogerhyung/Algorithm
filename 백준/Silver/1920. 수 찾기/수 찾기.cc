#include <iostream>
#include <algorithm>
using namespace std;

int n, m;                       
int a_array[1000000];           
int temp;

void binary_search(int x) { //이진탐색알고리즘: 오름차순으로 정렬된 배열을 검색
    int left = 0, mid = 0, right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;

        if (a_array[mid] == x) {
            cout << 1 << "\n";
            return;
        } else if (a_array[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << 0 << "\n"; //못 찾았을때
    return;
}

int main() {
    ios_base::sync_with_stdio(0); //stream의 입력과 출력동기화 비활성화 
    cin.tie(0); 

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a_array[i]; //크기 n 배열입력 
    }
    
    sort(a_array, a_array + n);    //오름차순정렬 
    cin >> m;

    int x;
    for (int i = 0; i < m; i++) {
        cin >> x; //A입력 
        binary_search(x); //이진탐색알고 호출
    }

    return 0;
}