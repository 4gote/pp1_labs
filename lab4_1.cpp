#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v(10);
    cout << "10 random numbers from 1 to 100:\n";
    for(int i = 0; i < 10; i++) {
        cin >> v[i];
    }
    cout << "print: ";
    for(int n : v) cout << n << " ";
    
    sort(v.begin(), v.end());
    cout << "\nSort: ";
    for(int n : v) cout << n << " ";
    
    cout << "\nMin: " << v.front() << " Max: " << v.back();
    
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << "\nNo dublicate: ";
    for(int n : v) cout << n << " ";
}