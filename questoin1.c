#include<stdio.h>
/* write  a program to calculate the sum of numbers
stored in an array of size of 10 take array values form the
user ?
*/
int main()
{
int marks[10];
int sum=0;
int i=0;
printf("enter is the number");
for(i=0;i<10;i++)
{
    scanf("%d",&marks[i]);
}
for(i=0;i<10;i++)
{
    sum=sum+marks[i];
}
printf("sum of the array is:%d",sum);
    return 0;
}
