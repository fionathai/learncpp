#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int chiSoDau, chiSoCuoi, soDienTieuThu, tienDien;
  cin >> chiSoDau >> chiSoCuoi;
  soDienTieuThu =(chiSoCuoi - chiSoDau);
  if (soDienTieuThu > 400){
    tienDien =  ((soDienTieuThu - 400)*2587+250300+224200+178600+76650+74200)*1.1;
  }
  else if (soDienTieuThu > 300){
    tienDien =  ((soDienTieuThu - 300)*2503+224200+178600+76650+74200)*1.1;
  }
  else if (soDienTieuThu > 200){
    tienDien =  ((soDienTieuThu - 200)*2242+178600+76650+74200)*1.1 ;
  }
  else if (soDienTieuThu > 100){
    tienDien =  ((soDienTieuThu - 100)*1786+76650+74200)*1.1;
  }
  else if (soDienTieuThu > 50){
    tienDien =  ((soDienTieuThu - 50)*1533+74200)*1.1;
  }
  else {
    tienDien =  soDienTieuThu*1484*1.1;
  }
  cout << int (tienDien*10)/10;
  return 0;
}