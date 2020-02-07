#include <unistd.h>

int main()
{
  char h = 'h';
  char e = 'e';
  char l1 = 'l';
  char l2 = 'l';
  char o1 = 'o';
  char s = ' ';
  char w = 'w';
  char o2 = 'o';
  char r = 'r';
  char l3 = 'l';
  char d = 'd';

  write(1, &h, 1);
  write(1, &e, 1);
  write(1, &l1, 1);
  write(1, &l2, 1);
  write(1, &o1, 1);
  write(1, &s, 1);
  write(1, &w, 1);
  write(1, &o2, 1);
  write(1, &r, 1);
  write(1, &l3, 1);
  write(1, &d, 1);
}
