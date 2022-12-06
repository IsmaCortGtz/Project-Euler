#include <iostream>
using namespace std;

int main(){
  
  long int number = 600851475143;

  for (int i = 2; i * i <= number; i++){
    while (number % i == 0 && number != i){
      number /= i;
    }
  }

  cout << "\tProblem 3 - Largest prime factor" << endl;
  cout << "Result: " << number << endl;
  return 0;
}