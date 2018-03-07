#include <stdio.h>
void printArray(int arr[],int);
void rotateByOne(int arr[],int);
int main()
{
  int i, N,SIZE,a;
  scanf("%d",&SIZE);
  a=SIZE;
  int arr[SIZE];
  for(i=0; i<SIZE; i++)
  {
   scanf("%d", &arr[i]);
   }
   scanf("%d", &N);
   N = N % SIZE;
   for(i=1; i<=N; i++)
   {
   rotateByOne(arr,a);
   }
   printArray(arr,a);
   return 0;
}
void rotateByOne(int arr[],int SIZE)
{
    int i,last;
    last= arr[SIZE-1];

    for(i=SIZE-1;i>0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

void printArray(int arr[],int SIZE)
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}
