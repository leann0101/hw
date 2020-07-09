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
  if(c->grade != d->grade) return d->grade - c->grade;
  else return c->no - d->no;
}
int cmp2( const void *a , const void *b ){
  struct man *c = (man *)a;
  struct man *d = (man *)b;
  return c->no - d->no;
}

int main(){
  int i = 0;
  man man[50];
  while(cin >> man[i].no >> man[i].name >> man[i].grade){
    i++;
  }
  qsort(man, i, sizeof(man[0]), cmp);
  for (int j = 0; j < i;j++){
    man[j].rank = j + 1;
  }
  qsort(man, i, sizeof(man[0]), cmp2);
  for (int j = 0; j < i;j++){
    cout << man[j].no << " " << man[j].name << " " << man[j].grade << " " << man[j].rank << endl;
  }
    return 0;
}