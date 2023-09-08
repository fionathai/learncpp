#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Toado {
  int x;
  int y;
};

int tinhKhoangCach(Toado i, Toado goc){
  int khoangCach;
  khoangCach = sqrt(pow((goc.x - i.x), 2) + pow((goc.y - i.y), 2));
  return khoangCach;
}

int main(){
  int n;
  Toado goc;
  Toado a[1000];
  int rememberx, remembery;
  int lonhon = 0;
  cin >> goc.x >> goc.y;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i].x >> a[i].y;
  }
  for (int i = 0; i < n; i++){
    if (tinhKhoangCach(a[i], goc) > lonhon){
      lonhon = tinhKhoangCach(a[i], goc);
      rememberx = a[i].x;
      remembery = a[i].y;
    }
  }
  cout << rememberx << " " << remembery;
  return 0;
}