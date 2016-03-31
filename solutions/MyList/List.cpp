#include "List.h"

Sset::Sset(int _s) {
  s = _s;
  p = new int[s];
  for (int i = 0; i < s; i++) p[i] = i;
}

Sset::Sset(Sset& c) {
  c.s = s;
  c.p = new int[s];
  for (int i = 0; i < s; i++) c.p[i] = p[i];
}

Sset::~Sset() { delete[] p; }


void Sset::singleton(int v) { p[v] = v; }

int Sset::search(int v) {
  return p[v];
}

void Sset::merge(int a, int b) {
  a = search(a);
  b = search(b);
  if (a != b) p[b] = a;
}
