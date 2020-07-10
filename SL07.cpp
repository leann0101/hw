#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char word[80];
  while(1){
    cin >> word;
    int i = 0, cnt = 0;
    if(strcmp(word,"end")==0)//輸入end結束
      break;
    while(1){
      if(word[i]=='\0')//讀到結尾就break
        break;
      else if(word[i] == 'a' ||word[i] == 'e'||word[i] == 'i'||word[i] == 'o'||word[i] == 'u'||word[i] == 'A'||word[i] == 'E'||word[i] == 'I'||word[i] == 'O'||word[i] == 'U')
        cnt+=5;//是母音加五分
      else
        cnt += 2;//子音加兩分
      if(int(word[i]) > 64 && int(word[i]) < 91)//大寫透過判別ASCII
        cnt += 1;//是大寫額外加一分
      i++;
    }
    cout << cnt << endl;
  }
}
