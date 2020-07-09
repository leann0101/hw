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
  cin >> people;
  for (int i = 0; i < people;i++){
    cin >> In[i].name;
  }
  while(cin >> payer>>money>>num){
    if(num!=0)
      devided_money = money / num;
    else
      devided_money = money;
    for(int i = 0; i < people;i++){
      if(strcmp(In[i].name,payer)==0){
        In[i].num -= money;
      }
    }
    for (int i = 0; i < num;i++){
      cin >> receiver;
      for(int i = 0; i < people;i++){
        if(strcmp(In[i].name,receiver)==0)
          In[i].num += devided_money;
      }
    }
  }
  for(int i = 0; i < people;i++){
    cout << In[i].name << " " << In[i].num << endl;
  }
  return 0;
}