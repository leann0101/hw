#include <iostream>
#include <string>
using namespace std;
     
int main() {
  string a,b;
  while(1){
    cin >> a >> b;
    if(a=="0" && b=="0")
      break;
    int cnt = 0;
    int n = a.length();
    if(b.length()>n)
      n = b.length();
    for (int t = 0; t < n;t++){
      cnt += (int(a[t]) + int(b[t]) - 96) / 10;
    }
    if(cnt==0)
      cout << "No carry operation." << endl;
    else if (cnt==1)
      cout << "1 carry operation." << endl;
    else
      cout << cnt << " carry operations." << endl;
  }
  return 0;
}