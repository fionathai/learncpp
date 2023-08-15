#include <iostream>
using namespace std;
int main() {
  int num, i;
  cin >> num;
  for (i = 2; i < num; i ++){
    //cout << i <<" "<< x << endl;
    if (num % i == 0){
      cout << "NO";
      break;
    }
  }
  //cout << i << num-1;
  if (num-1 == i-1){
    cout << "YES";
  }
  return 0;
}