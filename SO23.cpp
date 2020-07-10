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
    sort(a.begin(), a.end());//排序小到大

    int j, k;
    for (k = 0, j=n-1; j>0;k++, j--){
      cnt += a[k] * j;//次數剛好是反過來，出現之後後面幾個就要等他，所以是自己的時間乘以 (總數減掉他是第幾個)
    }
    cout << cnt << endl;
  }
  return 0;
}
