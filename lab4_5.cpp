#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    string s;
    
    cout << "Enter 5 names: ";
    for (int i = 0; i < 5; ++i) {
        cin >> s;
        q.push(s);
    }
    
    while (!q.empty()) {
        cout << "Now serving: " << q.front() << endl;
        q.pop();
    }
    
    cout << "Queue is empty.";
}