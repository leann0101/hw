#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(){
  int n, q, cnt=2;
  cin >> n;
  for (int i = 0; i < n;i++){
    cin >> q;
    for (int j = 0; j < q-1;j++)
      cnt = cnt * 2;
    cout << cnt << endl;
    cnt = 2;
  }
  return 0;
}