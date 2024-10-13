#include <stdio.h>
int res();
int main()
{
  printf("%d\n", res(6));

  return 0;
  //      char s[]="how was the";
  //    printf("%s",&s[4]);
}
int res(int n)
{
  return res(n ? 1 + res(n & n - 1) : 0);
}