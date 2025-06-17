#include <iostream>
using namespace std;
int main() {
    int m[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin >> m[i][j];
    cout << "Main: " << m[0][0] << " " << m[1][1] << " " << m[2][2] << " " << m[3][3] << "\n";
    cout << "Secondary: " << m[0][3] << " " << m[1][2] << " " << m[2][1] << " " << m[3][0];
}