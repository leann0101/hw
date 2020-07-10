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
      else if(int(word[i])>=48 && int(word[i])<57){//0~8
        cnt = int(word[i]) + 1;//加一
        word[i] = char(cnt);//轉回char
      }
      else if(int(word[i])==57){//9變成0
        word[i] = '0';
      }
      else if((int(word[i]) > 64 && int(word[i]) < 91)||(int(word[i]) > 96 && int(word[i]) < 123)){//是英文
        cnt = 187-int(word[i]);// Z TURN TO a，A turn to z，z turn to A，a turn to Z
        word[i] = char(cnt);//轉回char
      }
      i++;
    }
    cout << word;
  }
  return 0;
}
