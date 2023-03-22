#include<stdio.h>
/* write a program to calculate the sum of all
even numbers and sum of all odd ?
*/
int main()
{
int number[10];
int even=0,odd=0;
int i=0;
printf("enter is the number");
for(i=0;i<10;i++)
{
    scanf("%d",&number[i]);
}
for(i=0;i<10;i++)
{
    if(number[i]%2==0)
    {
        even=even+1;
    }
    else
    {
        odd=odd+1;
    }
    
}
printf("even number=%d,odd number=%d",even,odd);
    return 0;
}