#include <stdio.h>
#define MAX_SIZE 100
int main()
{
 int arr[MAX_SIZE], f[MAX_SIZE];
 int s, i, j, count;
 scanf("%d", &s);
 for(i=0; i<s; i++)
 {
 scanf("%d", &arr[i]);
 f[i] = -1;
 } for(i=0; i<s; i++)
 {
 count = 1;
 for(j=i+1; j<s; j++)
 {
  if(arr[i]==arr[j])
  {
  count++;
  f[j] = 0;
  }
  }
  if(f[i]!=0)
  {
  f[i] = count;
  }
  }
  for(i=0; i<s; i++)
  {
  if(f[i] == 1)
  {
  printf("%d ", arr[i]);
  }
  }
  return 0;
}
