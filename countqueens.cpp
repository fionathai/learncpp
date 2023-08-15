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
bool isMaxInCol(int n, int m){
    bool flag = true;
    for (int f = 0; f < nrows; f++){
        if (a[n][m] < a[f][m]){
            return false;
        }
    }
    return flag;
}
bool isMaxInSecondDiagonal(int n, int m){
    bool flag = true;
    for (int f = n, g = m; f >= 0 && g < ncols; f--, g++){
        if (a[n][m] < a[f][g]){
            return false;
        }
    }
    for (int f = n, g = m; f < nrows && g >= 0; f++, g--){
        if (a[n][m] < a[f][g]){
            return false;
        }
    }
    return flag;
}
bool isMaxInMainDiagonal(int n, int m){
    bool flag = true;
    for (int f = n, g = m; f < nrows && g < ncols; f++, g++){
        if (a[n][m] < a[f][g]){
            return false;
        }
    }
    for (int f = n, g = m; f >= 0 && g >= 0; f--, g--){
        if (a[n][m] < a[f][g]){
            return false;
        }
    }
    return flag;
}
int main(){
    int count = 0;
    cin >> nrows;
    ncols = nrows;
    for (int i = 0; i < nrows; i++){
      for (int j = 0; j < ncols; j++){
        cin >> a[i][j];
      }
    }
    for (int i = 0; i < nrows; i++){
      for (int j = 0; j < ncols; j++){
        if (isMaxInRow(i, j) && isMaxInCol(i, j) && isMaxInSecondDiagonal(i, j) && isMaxInMainDiagonal(i, j)){
            count ++;
        }
      }
    }
    cout << count;
    return 0;
}