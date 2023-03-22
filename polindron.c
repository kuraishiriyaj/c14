#include<stdio.h>
#include<string.h>
// wap to check the given string in palindrome or not//
int main()
{
char str[5]="nitin";
int i=0;
int j;
j=strlen(str)-1;
while(i<=j)
{
    if(str[i]==str[j])
    {
        i++;
        j--;
    }
    else
    {
        break;
    }
    

}
if(i>j)
printf("palindrome");
else
printf("not palindrome");
return 0;
}