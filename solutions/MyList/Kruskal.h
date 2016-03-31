#ifndef SOLUTIONS_MYLIST_FUNC_H_
#define SOLUTIONS_MYLIST_FUNC_H_


#include "List.h"
#include <vector>

using namespace std;

void initGraph(vector < pair < int, pair<int,int> > >& g, int p, int a, int b);

void sortt(vector < pair < int, pair <int,int> > >& g,  int n);

int kruskal(vector < pair < int, pair<int,int> > > g,const int n,const int m);


#endif //  SOLUTIONS_MYLIST_FUNC_H_
