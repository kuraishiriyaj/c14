#include<stdio.h>
/* write a program in c to read n number of values in an
 array and display it in reverse order take array values 
  from the user ?
*/
int main()
{
int a[100];
int n;
int i=0;
printf("enter is the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("number is reverse order is:\n");
for(i=n-1;i>=0;i--)
{
    printf("%d\n",a[i]);

}

    return 0;
}