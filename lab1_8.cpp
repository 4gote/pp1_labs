#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float weight, height;
    cout << "Enter your weight (kg): ";
    cin >> weight;
    cout << "Enter your height (m): ";
    cin >> height;
    float bmi = weight / (height * height);
    bmi = round(bmi * 100) / 100;
    cout << "Your BMI is " << bmi << endl;
    return 0;
}
