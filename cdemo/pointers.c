#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 1.23;
  float* ptrtod;
  float e = 2.34; 
  float* ptrtoe;
  ptrtod =&d;
  ptrtoe = &e;
 
  printf("The value of ptrtod is %f\n", d);
  printf("The address of d is %d\n", ptrtod);

  printf("The value of ptrtod is %f\n", e);
  printf("The address of e is %d\n", ptrtoe);

  float temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;
}
