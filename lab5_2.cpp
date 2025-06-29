#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    stack<char> s;
    string str;
    cout << "Enter a string: ";
    cin >> str;
    for (size_t i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
    cout << "Reversed string: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    return 0;
}