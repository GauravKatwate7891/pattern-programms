#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,r=0,c=0;
    printf("\n enter the count of row and column=>");
    scanf("%d%d",&r,&c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==1||i==r||j==1||j==c)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}