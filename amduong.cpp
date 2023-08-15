#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  float a, b;
  cin >> a >> b;
  if (((a>0)&&(b>0))||((a<0)&&(b<0))){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}