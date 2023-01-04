#include <iostream>
using namespace std;

int main() {
  int squares = 0;
  int total = 0;
  for (int i=1; i <= 100; i++){
    total += i;
    squares += (i * i);
  }

  int result = (total * total) - squares;

  cout << "\tProblem 6 - Sum square difference" << endl;
  cout << "Result: " << result << endl;
  return 0;
}