#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char**argv) {

	ios::sync_with_stdio(0);
	cin.tie(0);

	while(true){
		stack<char> S;
		string str;
		
		getline(cin, str);//입력
		
		if(str==".")
			break;
	
		bool flag = true;
			
		for(int i=0; i<str.size(); i++){			
			if(str[i] == '[' || str[i] == '('){//여는 기호 나오면 push
                S.push(str[i]);
			}			
			else if(str[i] == ']'){//닫는기호 ]가 입력되었을때
				if(S.empty()){//스택에 [이 없으면 false
					flag = false;
					break;
				}				
				else if(S.top() == '['){//top이 [이면 []이 되므로pop
					S.pop();
                }				
				else if(S.top() == '('){//여는 기호가 top이면 (]이되므로 false
					flag = false;
					break;
				}
			}			
			else if(str[i] == ')'){//닫는기호가 )일때
				if(S.empty()){//스택에 (이 없으면 false
                    flag = false;
					break;
				}				
				else if(S.top() == '('){//여는 기호(가 top이면 pop
					S.pop();
				}				
				else if(S.top() == '['){//여는 기호가 [이면 [)이되므로 false
					flag = false;
					break;
				}
			}
			
		}
		
		if(S.empty() && flag)
            cout << "yes\n" ;			
		else
			cout << "no\n" ;
	
	}

	return 0;
}