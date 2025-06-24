#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(20);
    for (int i = 0; i < 20; i++) v[i] = i+1;

    reverse(v.begin(), v.end());
    cout << "Evens: " << count_if(v.begin(), v.end(), [](int n){return n%2==0;}) << endl;

    v.erase(remove_if(v.begin(), v.end(), [](int n){return n%3==0;}), v.end());
    for (int n : v) cout << n << " ";
}