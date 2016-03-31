#include "Kruskal.h"

void initGraph(vector < pair < int, pair<int,int> > >& g, int p, int a, int b) {
	g.push_back(make_pair(p, make_pair(a, b)));
}

void sortt(vector < pair < int, pair <int,int> > >& g,  int n) {
  for (int i = 0; i < n; i++)
    for (int j = i; j < n; j++)
	  if (g[i].first > g[j].first) {
	    pair < int, pair <int,int> > tmp = g[i];
        g[i] = g[j];
        g[j] = tmp;
	  }
}

int kruskal(vector < pair < int, pair <int,int> > > g,const int n,const int m) {
  int sum = 0;
  sortt(g, m);
  Sset s(n);
  for (int i = 0; i < n; i++) {
    if (s.search(g[i].second.first) != s.search(g[i].second.second)) {
	  sum += g[i].first;
	  s.merge(g[i].second.first, g[i].second.second);
	}
  }
  return sum;
}
