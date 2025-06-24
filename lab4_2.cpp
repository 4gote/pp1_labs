#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> n;
        s.insert(n);
    }

    cout << "Number to find: ";
    cin >> n;
    cout << n << (s.count(n) ? " exists" : " doesn't exist") << endl;

    cout << "Set: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
}