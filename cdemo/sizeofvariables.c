#include<stdio.h>

int main()
{
  int a = 545;
  char c = 'd';
 float  f = 1.23;
  double g = 132.423;

  // print value and size of an int variable
  printf("int a value %d and size %d bytes.\n", a, sizeof(a));
  printf("char a value %c and size %d bytes.\n", c, sizeof(c));
  printf("float a value %f and size %d bytes.\n", f, sizeof(f));
  printf("double  a value %f and size %d bytes.\n", g, sizeof(g));
}

