#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x > 3 || x < 4); // returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  return 0;
}
