#include<stdio.h>
/* write a program to calculate the average of numbers
stored in an array of size 10 take array values form the user ?
*/
int main()
{
 int i=0,sum=0;
 int average=0;
 int number[10];
 printf("enter is the number");
 for(i=0;i<10;i++)
 {
    scanf("%d",&number[i]);
 }
 for(i=0;i<10;i++)
 {
    sum=sum+number[i];
 }
 average=sum/10;
 printf("average of the number is:%d",average);
    return 0;
}