#include <iostream>

using namespace std;

int main() {
  double r;
  cin >> r;
  double area = 3.141592653 * r * r;

  // Set cout to use fixed-point notation and set the precision
  cout.setf(ios::fixed);
  cout.precision(10);
  cout << area;

  return 0;
}

