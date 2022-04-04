#include <cstdio>
#include <cmath>

int main()
{
  unsigned long long int sum=0;
  int t;
  scanf("%i", &t);
  while (t--)
  {
  unsigned int n;
   scanf("%li", &n);
   if (static_cast<int>(log10(n)) == 1)
    sum += n;
  }
  printf("%llu", sum);
  return 0;
}
