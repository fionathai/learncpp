#include <iostream>
using namespace std;
int a [1001][1001];
int nrows, ncols;
bool isMaxInRow(int n, int m){
    bool flag = true;
    for (int f = 0; f < ncols; f++){
        if (a[n][m] < a[n][f]){
            return false;
        }
    }
    return flag;
}
bool isMinInCol(int n, int m){
    bool flag = true;
    for (int f = 0; f < nrows; f++){
        if (a[n][m] > a[f][m]){
            return false;
        }
    }
    return flag;
}
int main(){
    int count = 0;
    cin >> nrows >> ncols;
    for (int i = 0; i < nrows; i++){
      for (int j = 0; j < ncols; j++){
        cin >> a[i][j];
      }
    }
    for (int i = 0; i < nrows; i++){
      for (int j = 0; j < ncols; j++){
        if (isMaxInRow(i, j) == true && isMinInCol(i, j) == true)
        count ++;
      }
    }
    cout << count;
    return 0;
}