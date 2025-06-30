#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    if (s.empty()) return s;
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string s;
    cin >> s;
    cout << reverseString(s);
    return 0;
}