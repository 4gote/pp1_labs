#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> counts;
    string word;
    
    while (cin >> word) {
        counts[word]++;
        if (cin.get() == '\n') break;
    }
    
    for (auto& w : counts) {
        cout << w.first << " -> " << w.second << '\n';
    }
}