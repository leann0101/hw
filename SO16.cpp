#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  int q, n, k, num;
  cin >> q;
  for (int i = 0; i < q;i++){
    cin >> n >> k;
    vector<int> a;
    for (int j = 0; j < n;j++){
      cin >> num;
      a.push_back(num);
    }
    sort(a.rbegin(), a.rend());
    cout << a[k - 1] << endl;
  }
}