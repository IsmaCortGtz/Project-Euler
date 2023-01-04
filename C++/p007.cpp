#include <iostream>
using namespace std;

bool isPrime(int number);

int main() {
  
  int primeCounter = 0;
  int result = 0;
  for (int i = 2; primeCounter < 10001; i++){
    
    if (isPrime(i)){
      primeCounter++;
      result = i;
    }
  }

  cout << "\tProblem 7 - 10001st prime" << endl;
  cout << "Result: " << result << endl;
  return 0;
}


bool isPrime(int number){
  if(number < 2) return false;
  if(number == 2) return true;
  if(number % 2 == 0) return false;
  for(int i=3; (i*i)<=number; i+=2){
    if(number % i == 0 ) return false;
  }
  return true;
}