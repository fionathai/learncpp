#include <iostream>
using namespace std;

int factorial(int n){
  if (n < 10){
    return 1;
  }
  return 1 + factorial(n/10);
}
int main(){
  int n;
  cin >> n;
  cout << factorial(abs(n));
  return 0;
}
