#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct runner{
  int number;
  int min;
  int sec;
};

int cmp( const void *a , const void *b ){//排序的程式
  struct runner *c = (runner *)a;
  struct runner *d = (runner *)b;
  if(c->min != d->min) return c->min - d->min;//先比較分鐘
  else return c->sec - d->sec;//再比秒數
}

int main(){
  int i = 0;
  char no[1];
  runner runner[100];
  while(cin >> runner[i].number >> runner[i].min >> no[0] >> runner[i].sec){
    i++;
  }
  qsort(runner,i,sizeof(runner[0]),cmp);//排序
  for (int i = 0; i < 3; i++)
    cout << runner[i].number << " " << runner[i].min << "\'" << runner[i].sec << endl;
}
