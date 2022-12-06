#include <iostream>
using namespace std;

int main(){
  
  int result = 0;

  for (int x = 3; x < 1000; x++){
    if ((x % 3) == 0){
      result += x;
    }else if ((x % 5) == 0){
      result += x;
    }
  }

  cout << "\tProblem 1 - Multiples of 3 or 5" << endl;
  cout << "Result: " << result << endl;
  
  return 0;
}