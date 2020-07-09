#include <algorithm>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

struct In { 
  int ans=-999;
  int num=0; 
}In[51];

int cmp(const void *p1,const void *p2) { 
  const struct In *pf1 = (const struct In*) p1; 
  const struct In *pf2 = (const struct In*) p2; 
  return (int)(pf2->ans - pf1->ans); 
} 

int main(){
  int a;
  int cnt = 0, i, j, test=0;
  for(i = 0; i <= 50; i++){
    cin >> a;
    test = 0;
    if(a == -999)
      break;
    for(j = 0; j <= 50; j++){
      if(a == In[j].ans){
        In[j].num++;
        test = 1;
      }
    }
    if(test == 0){
      In[cnt].ans = a;
      In[cnt].num = 1;
      cnt++;
    }
  }
  qsort(In,50,sizeof(In[0]),cmp);
  for(j= 0; j < 50; j++){
    if(In[j].num!=0){
      cout << In[j].ans << " " << In[j].num << endl;
    }
  }
}