#include <iostream>
using namespace std;

int main(){
  
  int first = 1;
  int second = 2;
  int fibonacci;
  int result = 2;

  while (fibonacci < 4000000){
    fibonacci = first + second;
    first = second;
    second = fibonacci;

    if ((fibonacci % 2) == 0){
      result += fibonacci;
    }
  }

  cout << "\tProblem 2 - Even Fibonacci numbers" << endl;
  cout << "Result: " << result << endl;
  
  return 0;
}