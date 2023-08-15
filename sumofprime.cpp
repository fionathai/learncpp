#include <iostream>
using namespace std;
bool isprime (int lownum){
    bool flag = true;
    if (lownum < 2){
        flag = false;
    }   
    else {for (int i=2; i < lownum; i++){
        if (lownum % i ==0){
            flag = false;
            break;
        }
    }}
    return flag;
}
int main(){
    int num, a;
    a=0;
    cin >> num;
    for (int j = 1; j < num; j++){
        if (isprime(j)==true){
            a += j;
        }
    }
    cout << a;
    return 0;
}