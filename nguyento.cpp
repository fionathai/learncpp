#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    bool flag = true;
    if (num < 2){
        flag = false;
    }
    // 2 và 3 là số nguyên tố, mà flag = true ròi nên khỏi xét:)))
    // Xét từ 4 trở đi
    for (int i = 2; i < num; i ++){
        if (num % i == 0){
            flag = false;
        }
    }
    if (flag == true){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}