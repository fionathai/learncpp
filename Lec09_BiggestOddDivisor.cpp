#include <iostream>
using namespace std;

int factorial(int n){
  if (n % 2 !=0){
    return n;
  }
  return factorial(n/2);
}
int main(){
  int n;
  cin >> n;
  if (n % 2 != 0){
    cout << n;
  }
  else{
    cout << factorial(n);
  }
  return 0;
}