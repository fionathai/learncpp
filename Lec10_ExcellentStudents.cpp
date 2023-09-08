#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Hocsinh {
  string name;
  float diemToan;
  float diemVan;
};

float tinhTrungBinh(Hocsinh i){
  float dtb;
  dtb = (i.diemToan + i.diemVan)/2;
  return dtb;
}

int main(){
  int n;
  int count = 0;
  Hocsinh a[100];
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++){
    getline(cin, a[i].name);
    cin >> a[i].diemToan >> a[i].diemVan;
    cin.ignore();
  }
  for (int i = 0; i < n; i++){
    if (tinhTrungBinh(a[i]) >= 9){
      count ++;
    }
  }
  cout << count;
  return 0;
}
