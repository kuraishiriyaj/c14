#include<stdio.h>
/* write a program to find second largest in an array
take array values from the user ?
*/
int main()
{
int a[10];
int i;

printf("enter is the number");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
printf("\n Array is:\n");
for(i=0;i<10;i++)
{
    printf(" %d ",a[i]);
}
int min1=a[0];
int min2=a[1];
for(i=0;i<10;i++)
{
    if(min1>a[i])
    {
        min2=min1;
        min1=a[i];
    }
    else if(min1<a[i]&&min2>a[i])
    {
        min2=a[i];
    }
}
printf("\nsecond smalles number is :%d",min2);
    return 0;
}