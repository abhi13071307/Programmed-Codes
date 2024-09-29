#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  clrscr();
  clock_t t;
  t = clock();
  srand(time(NULL));
  for (int i = 0; i < 100; i++)
  {
    printf("%d\n", rand() % 1000);
  }
  t = clock() - t;
  double time_taken = ((double)t) / CLOCKS_PER_SEC;
  printf(" %f seconds to execute \n", time_taken);
  return 0;
}