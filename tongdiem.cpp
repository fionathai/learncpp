#include <iostream>
#include <iomanip>
int main(){
  float a, b, c;
  std::cin >>a>>b>>c;
  std::cout<<std::fixed<<std::setprecision(2)<<a+b+c;
  return 0;
}