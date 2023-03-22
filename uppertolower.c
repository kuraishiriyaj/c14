#include<stdio.h>
 // wap to convert uppercase to lowercase & vice versa?
 
int main()
{
    char str[]="RiYajKuRAISHI";
    int i=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a')&&(str[i]<='z'))
          str[i]=str[i]-32;
          else if ((str[i]>='A')&&(str[i]<='Z'))
           str[i]=str[i]+32;
           i++;

    }  
    printf("%s",str);

    return 0;
}