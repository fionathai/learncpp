#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void merge(int L[], int n1, int R[], int n2, int a[], int n){
  int i, j, k;
  i = j = k = 0; 
  while(i < n1 && j < n2){
    if(L[i] > R[j]){
      a[k] = L[i];
      i++;
    }
    else{
      a[k] = R[j];
      j++;
    }
    k++;
  }
  while(i < n1){
    a[k] = L[i];
    i++;
    k++;
  }
  while(j < n2){
    a[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort (int a[], int n){
  int L[50001];
  int R[50001];
  if (n > 1){
    int n1 = n/2;
    int n2 = n - n1;
    for(int i = 0; i < n1; i++){
      L[i] = a[i];
    }
    for(int i = 0; i < n2; i++){
      R[i] = a[i + n1];
    }
    mergeSort(L, n1);
    mergeSort(R, n2);
    merge(L, n1, R, n2, a, n); 
  }
}

int main(){
  int n;
  cin >> n;
  int a[100000];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  mergeSort(a, n);

  for (int i = 0; i < n; i++){
    cout << a[i]<<" ";
  }
  return 0;
}
