#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
struct man{
  int no;
  string name;
  int grade;
  int rank;
};

int cmp( const void *a , const void *b ){
  struct man *c = (man *)a;
  struct man *d = (man *)b;
  if(c->grade != d->grade) return d->grade - c->grade;//先比成績
  else return c->no - d->no;//再比編號
}
int cmp2( const void *a , const void *b ){
  struct man *c = (man *)a;
  struct man *d = (man *)b;
  return c->no - d->no;//比編號
}

int main(){
  int i = 0;
  man man[50];
  while(cin >> man[i].no >> man[i].name >> man[i].grade){
    i++;
  }
  qsort(man, i, sizeof(man[0]), cmp);//按成績排序
  for (int j = 0; j < i;j++){
    man[j].rank = j + 1;//再依序給他們名次
  }
  qsort(man, i, sizeof(man[0]), cmp2);//再按編號排回來
  for (int j = 0; j < i;j++){
    cout << man[j].no << " " << man[j].name << " " << man[j].grade << " " << man[j].rank << endl;
  }
    return 0;
}
