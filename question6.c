#include<stdio.h>
/* write a program to sort elements of an array of size 10
take array values from the user ?
*/
int main()
{
int a[10];
int j;
int t;
printf("enter is the nuber");
int i=0;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
    for(j=i+1;j<=10;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;

        }
    }
}
for(i=0;i<10;i++)
{
    printf("%d\n",a[i]);
}
    return 0;
}