#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,N=0;
    printf("\n enter the count of row and column=>");
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(j==1||j==N||i+j==N+1)
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