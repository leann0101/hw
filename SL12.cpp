#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
  char word[10000];
  while(cin.get(word, 10000, '\0')){
    int i = 0, cnt = 0;
    while(1){
      if(word[i]=='\0')
        break;
      else if(int(word[i])>=48 && int(word[i])<57){
        cnt = int(word[i]) + 1;
        word[i] = char(cnt);
      }
      else if(int(word[i])==57){
        word[i] = '0';
      }
      else if((int(word[i]) > 64 && int(word[i]) < 91)||(int(word[i]) > 96 && int(word[i]) < 123)){
        cnt = 187-int(word[i]);
        word[i] = char(cnt);
      }
      i++;
    }
    cout << word;
  }
  return 0;
}