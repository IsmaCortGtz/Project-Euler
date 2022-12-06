#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string text);

int main(){

  int result;

  for (int i = 999; i >= 100; i--){
    for (int j = 999; j >= 100; j--){
      if (isPalindrome(to_string(i * j)) && ((i * j) >result)){
        result = i * j;
      }
    }
  }

  cout << "\tProblem 4 - Largest palindrome product" << endl;
  cout << "Result: " << result << endl;

  return 0;
}


bool isPalindrome(string text){
  string currentText = text;
  string finalText;

  while(currentText.length() > 0){
    finalText += currentText.back();
    currentText.pop_back();
  }

  return text == finalText;
}