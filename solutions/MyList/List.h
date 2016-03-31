#ifndef SOLUTIONS_MYLIST_LIST_H_
#define SOLUTIONS_MYLIST_LIST_H_


class Sset {
 private:
  int* p;
  int s;
 public:
  Sset(int _s);
  Sset(Sset& c);
  ~Sset();

  void singleton(int v);
  int search(int v);
  void merge(int a, int b);

};


#endif  // SOLUTIONS_MYLIST_LIST_H_
