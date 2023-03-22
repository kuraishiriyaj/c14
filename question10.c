#include<stdio.h>
/* write a program in c to copy the elements of a one array
into another array take array values from the user ?
*/
int main()
{
    int a[10];
    int b[10];
    printf("enter is the number of the arrays\n");
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
      printf("array is:\n");

    for(i=0;i<10;i++)
    {
        printf(" %d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
  
    printf("\ncopy from the array another array is:\n");
    for(i=0;i<10;i++)
    {
        printf(" %d ",b[i]);
    }


    return 0;
}