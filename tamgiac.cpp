#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
  float a, b, c, p;
  cin >> a >> b >> c;
  p = a+b+c;
  cout<<fixed<<setprecision(2)<< p << "   " <<  sqrt(p*(p-a)*(p-b)*(p-c));
  return 0;
}