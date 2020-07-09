#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  int q, n, p;
  cin >> q;
  for (int i = 0; i < q;i++){
    cin >> n;
    int cnt = 0;
    vector<int> a;
    for(int j=0;j<n;j++){
      cin >> p;
      a.push_back(p);
    }
    sort(a.begin(), a.end());

    int j, k;
    for (k = 0, j=n-1; j>0;k++, j--){
      cnt += a[k] * j;
    }
    cout << cnt << endl;
  }
  return 0;
}