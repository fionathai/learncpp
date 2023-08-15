#include <iostream>
using namespace std;
int main (){
    int num, digit, death, sotriettieu;
    int x = 10;
    int digit1 = 0;
    death = 0;
    sotriettieu = 1;
    cin >> num;
    for (int i = 1; i<=10; i++){
        digit = (num % x - death)/sotriettieu;
        if (digit > digit1){
            digit1 = digit;
        }
        death += digit*x/10;
        x *= 10;
        sotriettieu *=10;
    }
    cout << digit1;
    return 0;
}