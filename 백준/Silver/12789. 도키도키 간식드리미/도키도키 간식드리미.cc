#include<iostream>
#include<stack>
using namespace std;
int main() {
    int N;
    int order = 1;
    int student;
    stack<int> stack_;
    cin >> N;

    while (N--) {
        cin >> student;
        if (student == order)
            order++;
        else
            stack_.push(student);

        while (!stack_.empty() && (stack_.top() == order)) {
            stack_.pop();
            order++;
        }
    }
    if (stack_.empty())
        cout << "Nice";
    else
        cout << "Sad";
    return 0;
}