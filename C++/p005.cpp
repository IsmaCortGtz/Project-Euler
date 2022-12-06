#include <iostream>
using namespace std;

bool isDivisible(int number);

int main(){

  int result = 1;
  int i = 1;

  while (true){
   if (!isDivisible(i)){
    i++;
   }else{
    result = i;
    break;
   }
  }

  cout << "\tProblem 5 - Smallest multiple" << endl;
  cout << "Result: " << result << endl;

  return 0;
}


bool isDivisible(int number){
  for (int x = 1; x <= 20; x++){
    if ((number % x) != 0){ return false; }
  }

  return true;
}