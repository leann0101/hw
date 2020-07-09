#include<iostream>
#include<string>
using namespace std;
int main(){
  char c[1000];
  int ans, i=0;
  while(cin.getline(c, 1000)){
    while(c[i] != '\0'){
      ans = int(c[i]);
      ans = ans - 3;
      c[i] = char(ans);
      i++;
    }
    cout << c << endl;
  }
  return 0;
}