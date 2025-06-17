#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int aim;
    cin >> aim;
    for (int i = 0; i < n; i++) {
        if (arr[i] == aim) {
            cout << "Found at index " << i << endl;
            return 0;  
        }
    }
    return 0;
}