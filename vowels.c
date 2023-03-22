#include<stdio.h>
int main()
{
 char str[]="riyajkuraishi";
 int i;
 int count=0;
 for(i=0;i<str[i];i++)
 {
    if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='e')
    
         count++;
    

 }
 printf("count of the vowels:%d",count);

    return 0;
}