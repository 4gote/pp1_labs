//continue
//выводитт все числа кроме 4
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 7; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}

