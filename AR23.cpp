#include <iostream>
#include <string>
using namespace std;
int main(){
  char c[1000]={};
  int i = 0;
  cin.getline(c, 1000);
  while(c[i] != '\0'){
    if( int(c[i]) >= 65 && int(c[i]) <= 77 )//如果是A~M
      c[i] = char(int(c[i]+13));//透過ASCII碼轉成N~Y
    else if( int(c[i]) >= 78 && int(c[i]) <= 90 )//如果是N~Z
      c[i] = char(int(c[i]-13));//透過ASCII碼轉成A~M
    else if( int(c[i]) >= 97 && int(c[i]) <= 109 )//如果是a~m
      c[i] = char(int(c[i]+13));//透過ASCII碼轉成n~y
    else if( int(c[i]) >= 110 && int(c[i]) <= 122 )//如果是n~z
      c[i] = char(int(c[i]-13));//透過ASCII碼轉成a~m
    i++;//下一個字
  }
  cout << c << endl;
}
