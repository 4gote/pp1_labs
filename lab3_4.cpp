#include <iostream>
using namespace std;
int main() {
    int n;
    cout << " ";
    cin >> n;
    int* arr = new int[n];
    cout << " ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << " ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}