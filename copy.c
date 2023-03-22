#include<stdio.h>
// wap to copy one stirng an onther
int main()
{
char a[15]="riyajkuraishi";
char b[15];
int i=0;
while(a[i]!='\0')
{
    b[i]=a[i];
    i++;


}
b[i]='\0';
printf("copy of the stirng%s",b);

    return 0;
}