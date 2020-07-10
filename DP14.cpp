#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
struct In { 
  char name[15];
  int num=0; 
}In[30];

int main(){
  int people;
  int money, num, devided_money;
  char payer[15], receiver[15];
  cin >> people;//讀入有幾個人
  for (int i = 0; i < people;i++){
    cin >> In[i].name;//讀入有哪些人
  }
  while(cin >> payer>>money>>num){
    if(num!=0)
      devided_money = money / num;//devided money是那些人一人可以分多少
    else
      devided_money = money;
    for(int i = 0; i < people;i++){
      if(strcmp(In[i].name,payer)==0){//找到那個人
        In[i].num -= money;//扣他的錢
      }
    }
    for (int i = 0; i < num;i++){
      cin >> receiver;
      for(int i = 0; i < people;i++){
        if(strcmp(In[i].name,receiver)==0)//找到要收錢的人
          In[i].num += devided_money;//把每人可以分到的錢加上去
      }
    }
  }
  for(int i = 0; i < people;i++){
    cout << In[i].name << " " << In[i].num << endl;
  }
  return 0;
}
