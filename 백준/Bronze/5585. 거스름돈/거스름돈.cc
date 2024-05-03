#include<iostream>
using namespace std;

int main(){
    int charge;
    cin>> charge;
    int change=1000-charge;
    int coin_array[6]={500,100,50,10,5,1};
    int outcome=0;
    for(int coin:coin_array){
        outcome=outcome+(change/coin);
        change=change%coin;
    }
    cout<<outcome;
    
    return 0;
}