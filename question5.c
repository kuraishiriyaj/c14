#include<stdio.h>
/* write a programto find the smallest number stored in an array
of size 10 take array values from the user ?
*/
int main()
{
int number[10];
int i=0;
int smallest;
printf("enter is the number");
for(i=0;i<10;i++)
{
    
scanf("%d",&number[i]);
smallest=number[0];
}
for(i=1;i<10;i++)
{
    
    if(smallest>number[i])
      
          smallest=number[i];
     
}
printf("smallest number is:%d",smallest);
    return 0;
}