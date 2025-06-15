#include <iostream>
#include <string>
using namespace std;
int main() {
    string name; 
    cout << "Your name: "; 
    cin >> name; 
    string greeting = "Hello ";
    cout << greeting << name << endl; 
    return 0;
}