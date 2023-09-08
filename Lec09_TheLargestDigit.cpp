#include <iostream>
using namespace std;
int factorial(int n, int max){
  if (n < 10){
    if(n < max){
      return max;
    }
    else{
      return n;
    }
  }
  if (n%10 > max){
    max = n%10; 
  }
  return factorial(n/10, max);
}
int main(){
  int n;
  int max = 0;
  cin >> n;
  cout << factorial(abs(n), max);
  return 0;
}