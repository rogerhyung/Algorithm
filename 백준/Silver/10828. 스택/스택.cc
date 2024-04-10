#include <iostream>
#include <stack> 
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    stack<int> stk;
    string str;
    
    if(n<1 || n>10000)
        return 0;
        
    for(int i=0; i<n; i++){
        cin >> str;
        
        if(str == "push") {   //push         
            int num=0;
            cin >> num;
            stk.push(num);            
        } else if(str == "pop"){   //pop, 스택이 비어있으면 -1 출력         
            if(stk.empty()){                
                cout << "-1" << endl;                
            } else {                
                cout << stk.top() << endl;
                stk.pop();                
            }            
        } else if(str == "size"){    //size        
            cout << stk.size() <<endl;            
        } else if(str == "empty"){     //if empty->1      
            if(stk.empty()){                
                cout << "1" << endl;                
            } else {                
                cout << "0" << endl;                
            }            
        } else if(str == "top"){       //if empty-1 else top     
            if(stk.empty()){                
                cout << "-1" << endl;                
            } else {                
                cout << stk.top() << endl;                
            }
        }
    }

    return 0;
}
