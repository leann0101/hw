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
      a.push_back(p);
    }
    sort(a.begin(), a.end());
    for (int k = 0; k < a.size();k++)
      cout << a[k];
    cout << endl;
    for (int k = a.size()-1; k >= 0;k--)
      cout << a[k];
    cout << endl;
  }
  return 0;
}