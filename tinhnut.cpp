#include <iostream>
using namespace std;
int main(){
    int a, b, c, e, f;
    cin >>a;
    b = a % 10;
    c = (a % 100 - b)/10;
    e = (a % 1000 - c*10 -b)/100;
    f = (a % 10000 - e*100 - c*10 -b)/1000;
    cout << ((a - f*1000 - e*100 - c*10 -b)/10000 + b + c + e +f)%10;
    return 0;
}
