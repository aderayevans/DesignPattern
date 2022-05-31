#include "Singleton.h"
#include <stdio.h>
int main() {
  Singleton *s = Singleton::getInstance();
  s->setData(45);

  Singleton *t = Singleton::getInstance();
  printf("%d", t->getData());
  return 0;
}