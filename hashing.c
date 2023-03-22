#include<stdio.h>
// wap to find frequency of the all the no in a given array
int main()
{
  int a[10]={1,6,3,8,9,4,8,2,3,2};
  int hashing[100]={0};
  int i;
  for(i=0;i<10;i++)
   hashing[a[i]]++;
   for(i=0;i<100;i++)
   {
      if(hashing[i]!=0)
      printf("%d--> %d\n",i,hashing[i]);
   }
    return 0;
}
