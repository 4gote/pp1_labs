#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[100];
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Find frequency of: ";
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    int* min_it = min_element(arr, arr + n);
    int* max_it = max_element(arr, arr + n);
    cout << "Count of " << target << ": " << count << "\n";
    cout << "Min: " << *min_it << "\n";
    cout << "Max: " << *max_it << "\n";
    return 0;
}