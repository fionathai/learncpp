#include <iostream>
using namespace std;
int main(){
    int a = 5; // gán
    int *p; // khai báo pointer
    int b = a; // lại là gán
    int c = a;// lại là gán
    p = &a; // chỉ p tới địa chỉ trên bộ nhớ của biến a
    cout << p << endl; // in ra địa chỉ mà nó đg chỉ theo dạng hexa
    cout << *p << endl; // in ra giá trị của biến của cái địa chỉ mà nó đg chỉ
    p = &b; // chỉ p tới địa chỉ trên bộ nhớ của biến b
    cout << p << endl; // in ra địa chỉ mà nó đg chỉ theo dạng hexa
    cout << *p <<endl; // in ra giá trị của biến của cái địa chỉ mà nó đg chỉ
    p = &c;
    ++c;
    cout << *p; // lúc này p sẽ cx tăng 1 tại vì c đg chỉ vô c mà c đc tăng 1, còn a và b nằm ở vùng nhớ khác nhau với cả p chả chỉ vào nó nên a và b chả ảnh hưởng gì.
    // int count;
    // cout << count << endl;
    // for (int i = 0; i < 15; i++){
    //  count *= 1000;
    // }
    // cout << count;
    return 0;
}