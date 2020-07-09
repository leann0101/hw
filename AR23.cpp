#include <iostream>
#include <string>
using namespace std;
int main(){
  char c[1000]={};
  int i = 0;
  cin.getline(c, 1000);
  while(c[i] != '\0'){
    if( int(c[i]) >= 65 && int(c[i]) <= 77 )
      c[i] = char(int(c[i]+13));
    else if( int(c[i]) >= 78 && int(c[i]) <= 90 )
      c[i] = char(int(c[i]-13));
    else if( int(c[i]) >= 97 && int(c[i]) <= 109 )
      c[i] = char(int(c[i]+13));
    else if( int(c[i]) >= 110 && int(c[i]) <= 122 )
      c[i] = char(int(c[i]-13));
    i++;
  }
  cout << c << endl;
}
