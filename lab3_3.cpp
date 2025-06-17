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
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    cout << "Even: " << even_count << endl;
    cout << "Odd: " << odd_count << endl;
    return 0;
}