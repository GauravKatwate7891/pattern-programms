#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,n=0;
    printf("\n enter the count of row and column=>");
    scanf("%d",&n);
    if(n>=0 && n%2==1)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(j==1||j==n||i==(n/2)+1)
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
    }
    else
    {
        printf("\n given number are negative or even");
    }
    getch();
    return 0;
}