#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  if (a < 7){
    if (a > 3){
        cout << "2";
    }
    else {
        cout << "1";
    }
  }
  else if (a > 9){
    cout << "4";
  }
  else {
    cout << "3";
  }
  return 0;
}