#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void insertAsc(int a[], int n, int x){
  int j = n;
  while(j>0){
    if(a[j-1] <= x){
      break;
    }
    a[j] = a[j-1];
    j--;
  }
  a[j] = x;
}

void insertSort (int a[], int n){
  for(int i = 1; i < n; i++){
    int x = a[i];
    insertAsc(a, i, x);
  }
}

int main(){
  int n;
  cin >> n;
  int a[1001];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  for (int i = 0; i < n; i++){
    insertSort(a, n);
  }
  for (int i = 0; i < n; i++){
    cout << a[i]<<" ";
  }
  return 0;
}