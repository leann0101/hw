#include <algorithm>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

unsigned int test(string a){
  if(a=="correct")//corret加十分
    return 10;
  else if (a=="wrong")//wrong扣十分
    return -10;
  else if(a=="give-up")//giveup沒分
    return 0;
  else
    return 20;//輸入錯誤
}

struct In { 
  int team;
  int num=0; 
}In[3];

int cmp(const void *p1,const void *p2) { 
  const struct In *pf1 = (const struct In*) p1; 
  const struct In *pf2 = (const struct In*) p2; 
  return (int)(pf2->num - pf1->num); 
} 

int main(){
  unsigned int q;
  string a;
  cin >> q;
  In[0].team= 1;//team是隊伍編號
  In[1].team= 2;
  In[2].team= 3;
  for (int i = 1; i <= q;i++){
    cin >> a;
    if(test(a)!=20)//沒輸入錯時
      In[0].num+= test(a);//加上分數(共有三個)
    cin >> a;
    if(test(a)!=20)
      In[1].num+= test(a);
    cin >> a;
    if(test(a)!=20)
      In[2].num+= test(a);
  }
  qsort(In,3,sizeof(In[0]),cmp);//照分數大到小排序
  cout << "(" << In[0].team << "," << In[0].num << ")";
  if(In[0].num != In[1].num)
    cout << "\n";
  cout << "(" << In[1].team << "," << In[1].num << ")";
  if(In[1].num != In[2].num)
    cout << "\n";
  cout << "(" << In[2].team << "," << In[2].num << ")" << endl;
  return 0;
}
