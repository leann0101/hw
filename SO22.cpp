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
    vector<int> a;
    for(int j=0;j<n;j++){
      cin >> p;
      a.push_back(p);//讀入
    }
    sort(a.begin(), a.end());//排序
    for (int k = 0; k < a.size();k++)//正著印出來
      cout << a[k];
    cout << endl;
    for (int k = a.size()-1; k >= 0;k--)//反著印出來
      cout << a[k];
    cout << endl;
  }
  return 0;
}
