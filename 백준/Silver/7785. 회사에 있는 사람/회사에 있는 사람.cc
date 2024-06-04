#include<iostream>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n = 0;
	string element;
	string enter;
	cin >> n;

	map<string,string,greater<string>> s;
	while (n--) {
		cin >> element >> enter;
		if (enter == "enter")
			s.insert({ element,enter});
		else if (enter == "leave")
			s.erase(element);
	}
	for (auto i = s.begin(); i != s.end(); i++) {
		cout << i->first << "\n";
	}

	return 0;
}