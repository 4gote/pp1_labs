#include <iostream>
using namespace std;
int main() {
    int n, a[n];
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n-1; j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
    for(int i=0; i<n; i++) cout << a[i] << " ";
}