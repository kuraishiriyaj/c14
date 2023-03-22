#include<stdio.h>
void fun(int a[][2][3],int rows)
{
    int i,j,k;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d",a[i][j][k]);
            }
            printf("\n");
        
        }
        printf("\n");
    }

}
int main()
{
    int a[2][2][3];
    int i,j,k;
    printf("enter is the number of the a");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    fun(a,2);
        


    return 0;
}