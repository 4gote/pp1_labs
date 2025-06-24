#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<char> s; char c;
    while(cin.get(c) && c != '\n') {
        if(c == '(') s.push(c);
        if(c == ')') if(s.empty()) return cout << "Incorrect", 0; else s.pop();
    }
    cout << (s.empty() ? "Correct" : "Incorrect");
}