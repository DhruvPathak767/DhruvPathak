#include <stdio.h>
int lru(int t[], int n)
{
  int i, m = t[0], pos = 0;
  for (i = 1; i < n; i++)
  {
    if (t[i] < m)
    {
      m = t[i];
      pos = i;
    }
  }
  return pos;
}
int main()
{
  int n, a[20], no, i, frame[20], n1, n2, j, c = 0, t[20], f = 0, pos;
  printf("\n enter no of pages:\n");
  scanf("%d", &n);
  printf("\n enter the reference string:\n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("\n enter the no of frames :");
  scanf("%d", &no);
  for (i = 0; i < no; i++)
    frame[i] = -1;
  for (i = 0; i < n; i++)
  {
    n1 = n2 = 0;
    for (j = 0; j < no; j++)
    {
      if (frame[j] == a[i])
      {
        c++;
        t[j] = c;
        n1 = n2 = 1;
        break;
      }
    }
    if (n1 == 0)
    {
      for (j = 0; j < no; j++)
      {
        if (frame[j] == -1)
        {
          c++;
          f++;
          frame[j] = a[i];
          t[j] = c;
          n2 = 1;
          break;
        }
      }
    }

    if (n2 == 0)
    {
      pos = lru(t, no);
      c++;
      f++;
      frame[pos] = a[i];
      t[pos] = c;
    }

    printf("\n");

    for (j = 0; j < no; j++)
    {
      if (frame[j] != -1)
        printf("|%d|\t", frame[j]);
    }
  }
  printf("\nPage Faultsis:%d",f);
}