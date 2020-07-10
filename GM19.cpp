#include <iostream>
#include <math.h>
#include <string.h>
#include <vector>
using namespace std;
int main(){
  int q, n, o, min = 100000, mini, total=0, total2, minj, ans = 0;
  cin >> q >> n;
  vector<int> x[1000];
  for (int i = 0; i < q;i++){
    for (int j = 0; j < n;j++){
      cin >> o;
      x[i].push_back(o);
    }
  }
  for (int k = 0; k<q-1;k++){
    for (int l =1; l<q;l++){
      if(k!=l){
        for (int j = 0; j < x[l].size(); j++){
          ans += pow(x[l][j] - x[k][j], 2);//算距離總和
          total = total + x[l][j] + x[k][j];//算數字總和
        }
        if(ans < min){//找最短距離存進去
          min = ans;
          mini = k;
          minj = l;
          total2 = total;
        }
        else if(ans == min){//距離一樣就比數字大小
          if(total < total2){
            min = ans;
            mini = k;
            minj = l;
            total2 = total;
          }
        }
      }
      ans = 0;
      total = 0;
    }
  }
  for (int h = 0; h < x[0].size(); h++){
    cout << x[mini][h];
    if(h!= n-1)
      cout << " ";
    else
      cout << endl;
  }
  for (int h = 0; h < x[0].size(); h++){
    cout << x[minj][h];
    if(h!= n-1)
      cout << " ";
    else
      cout << endl;
  }
  return 0;
}
