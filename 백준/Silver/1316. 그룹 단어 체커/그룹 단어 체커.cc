#include<iostream>
#include<string>

using namespace std;

int main() {
	int N;
	cin >> N;
	int result = 0;

	while (N--) {
		string str;
		cin >> str;
		int l = str.length();
		string words;
		int j = 1;
		int state = 1;
		for (int i = 0; i < l; i++) {
			if (i == 0) {
				words[j] = str[i];
				j++;
			}
			else {
				if (str[i - 1] != str[i]) {
					int temp = j;
					while (temp--) {
						if (str[i] == words[temp]) {
							state = 0;
							break;
						}
						if (!state)
							break;
					}
					if (!state)
						break;
					words[j] = str[i];
					j++;
				}
			}
			if (!state)
				break;
		}
		if (state) 
			result++;
					
	}
	cout << result;
	return 0;

}