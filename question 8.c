#include<stdio.h>
/* write a program to find the second smallest number
in an array take array values form user ?
*/
int main()
{
 int a[10]={3,6,3,87,34,9,77,23,12,8};
 int min1=a[9];
 int min2=a[8];
int i;
for(i=0;i<10;i++)
{
   if(min1>a[i])
   {

      min1=a[i];
   }
   else if(min2>a[i]&&min1<a[i])
   {
      min2=a[i];
   }
}
printf("second lagest number is:%d",min2);
    return 0;
}
