#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
 int b = 3;
  if (a==b)
  {
    printf("a is 3\n");
  }
  if (a!=b)
  {
    printf("a is not 3\n");
  }
  if (b>a)
  {
    printf("b is greater than a\n");
  }
  if (b >= a )
  {
    printf("b is greater than or equal to a\n");
  }
  if (a == 0 && b== 3)
  {
    printf("a is equal to 0 and b is equal to 0\n");    
  }
  if (a==0 || b == 3)
  {
    printf("a is equal to 0 OR b is equal to 3\n");
  }
  if (!(a==3))
  {
    printf("a is not equal to 3\n");
  }

}
