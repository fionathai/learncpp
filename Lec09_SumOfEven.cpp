#include <iostream>
using namespace std;
int a[10000];
//int ans = 0;
int sumofeven(int ans, int nn){
   // cout << a[2];
  if (a[nn]% 2 == 0){
    ans += a[nn];
  }
  if (nn == 0){
    return ans;
  }
  return sumofeven(ans, nn-1);
}
int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  cout << sumofeven(0, n-1);
  //cout << a[2];
  return 0;
}