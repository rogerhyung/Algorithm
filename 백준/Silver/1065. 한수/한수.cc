#include<iostream>
using namespace std;

int main(){
    int N=0;
    cin>>N;
    int result=0;    
    int digit_100=0;
    int digit_10=0;
    int digit_1=0;
    int d=0;
    int Num=0;

    for(int i=1;i<=N;i++){
        if (!(i/100))//1~99는 모두 한수 
            result=result+1;
        else {
            Num=i;
            digit_100=Num/100;
            Num=Num%100;
            digit_10=Num/10;
            digit_1=Num%10;
            d=digit_100-digit_10;
            if ((digit_10-digit_1)==d){//1000은 해당 안됨으로 무시
                result=result+1;
            }
        }
            
    }
    
    cout<<result;
    return 0;
    
}