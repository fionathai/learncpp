#include <iostream>
using namespace std; 
int main(){
    int n, sogiocuoi, count = 100002;
    int sapxep[100002];
    int chuasapxep[100002];
    int k = 1;
    int id;
    cin >> n;
    for (int f = k; f <= n; f++){
        cin >> chuasapxep[f];
    }
    for (int j = k; j <= n; j++){
        for (int i = 1; i <= n; i++){ 
            if (chuasapxep[i] < count){
                count = chuasapxep[i];
                sapxep[k] = count;
            }
        }
        count = sapxep[k];
        for (int g = 1; g <= n; g++){
            if (chuasapxep[g]==count){
                    chuasapxep[g] = 100003;
                    count = 100002;
            }
        }
        k++;
    }
    id = sapxep[1];
    for (int i = 1; i<=n; i++){
        if (id!=sapxep[i]){
            cout << id;
            break;
        }
        if (id == n){
            if (sapxep[1]>1){
                cout << sapxep[1] - 1;
            }
            else if (sapxep[1] == 1){
                cout << id + 1;
            }
        }
        id ++;
    }
    return 0;
}