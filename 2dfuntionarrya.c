#include<stdio.h>
void fun(int a[][3],int rows)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    int a[2][3];
    int i,j;
    printf("enter is the a number");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
                scanf("%d",&a[i][j]);
        }
    }
    
    fun(a,2);



    return 0;
}