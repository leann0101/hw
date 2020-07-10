#include<iostream>
#include<string>
using namespace std;
int main(){
  char c[1000];
  int ans, i=0;
  while(cin.getline(c, 1000)){
    while(c[i] != '\0'){
      ans = int(c[i]);//換成ASCII碼
      ans = ans - 3;//ASCII碼減三就是
      c[i] = char(ans);//在換回char
      i++;
    }
    cout << c << endl;
  }
  return 0;
}
