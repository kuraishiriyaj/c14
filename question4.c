#include<stdio.h>
/* write a program to find the greatest number stored in
  an array of size of 10 take array values from the user ?
*/
int main()
{
int number[10];
int i=0;
int max;
printf("enter is the number");
for(i=0;i<10;i++)
{
    
scanf("%d",&number[i]);
 max=number[0];
}
for(i=1;i<10;i++)
{
    
    if(max<number[i])
      
          max=number[i];
     
}
printf("greatest number is:%d",max);
    return 0;
}