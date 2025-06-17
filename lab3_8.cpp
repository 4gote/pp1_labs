#include <iostream>
using namespace std;
int main() {
    int m[4][4], max = 0, row = 0;
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> m[i][j];
            sum += m[i][j];
        }
        if (sum > max) {
            max = sum;
            row = i + 1;
        }
    }
    
    cout << "Row " << row << " has the maximum sum: " << max;
}