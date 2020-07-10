#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
  int q, n, i, j,k,l,min=100000;
  cin >> q;
  for (i = 0; i < q;i++){
    cin >> n;
    int x[10000]={}, y[10000]={};
    for (j = 0; j < n;j++){
      cin >> x[j] >> y[j];
    }
    for (k = 0;k<n-1;k++){
      for (l =1;l<n;l++){
        if(k!=l){
          if(pow(x[l]-x[k],2)+pow(y[l]-y[k],2)<min)//如果距離比較小
            min = pow(x[l] - x[k], 2) + pow(y[l] - y[k], 2);//就把距離存到min
        }
      }
    }
    cout << min << endl;//找出最小距離
    min = 10000;
  }
}
