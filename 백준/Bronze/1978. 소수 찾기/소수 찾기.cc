#include<iostream>
using namespace std;

int main(){
    int number=0;
    int result=0;
    int input=0;
    cin >> number;//첫줄 입력
    
    for(int i=0;i<number;i++){
        cin >> input;
        int checker=0;
        for(int j=2;j<input;j++){
            if (input%j)
                checker++;
        }
        if(checker==(input-2))
            result++;
    }
    cout <<result<<'\n';    
       
}
