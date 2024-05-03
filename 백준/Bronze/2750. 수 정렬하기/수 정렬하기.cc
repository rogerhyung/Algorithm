#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); //stream의 입력과 출력동기화 비활성화 
    cin.tie(0);

    int N = 0;
    int A[1000];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A,A+N);
    
    for(int i=0;i<N;i++){
        cout<<A[i]<<'\n';
    }


    return 0;

}