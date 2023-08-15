#include <iostream> 
#include <iomanip>
using namespace std;
int main() {
    float a;
    #define Pi 3.14 
    cin >> a;
    cout <<fixed<<setprecision(2)<< a*2*3.14 << "\n" << a*a*3.14;
    return 0;
}