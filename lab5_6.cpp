#include <iostream>
#include <deque>
using namespace std;

bool isPalindrome(string word) {
    deque<char> dq;
    for (char c : word) dq.push_back(tolower(c));
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) return false;
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << "It is " << (isPalindrome(word) ? "" : "not ") << "a palindrome.\n";
    return 0;
}