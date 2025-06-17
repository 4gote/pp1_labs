//if_3
#include <iostream>
using namespace std;

int main() {
  int age = 30;
  if (age < 18) {
    cout << "noVoenkomat";
  } else if (age > 27) {
    cout << "Freedom";
  } else {
    cout << "Voenkomat";
  }
  return 0;
}
