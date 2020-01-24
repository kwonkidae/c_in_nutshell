
#include <stdio.h>

inline void swapf(float *p1, float *p2)
{
  float tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

void selection_sortf(float a[], int n)
{
  if (n <= 1)
    return;
  register float *last = a + n - 1, *p, *minPtr;

  for (; a < last; ++a)
  {
    minPtr = a;
    for (p = a + 1; p <= last; ++p)
    {
      if (*p < *minPtr)
        minPtr = p;
    }
    swapf(a, minPtr);
  }
}

int main()
{
  float fArr[] = {2.2F, 0.0F, -1.1F, 3.3F, -4.4F};
  printf("%f", *fArr);
  int n = sizeof(fArr) / sizeof(*fArr);

  selection_sortf(fArr, n);
  for (int i = 0; i < n; ++i)
  {
    printf("%8.2f", fArr[i]);
  }
  putchar('\n');
  return 0;
}
