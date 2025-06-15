#include <iostream>
using namespace std;
 
int main() {
    int ageYears;
    cout << "Enter your age in years: ";
    cin >> ageYears;

    int ageMonths = ageYears * 12;
    cout << "You are " << ageMonths << " months old." << endl;

    return 0;
}
