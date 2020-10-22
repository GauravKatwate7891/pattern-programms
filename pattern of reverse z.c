#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,z=0;
    printf("\n enter the count of row and column=>");
    scanf("%d",&z);

    for(i=1; i<=z; i++)
    {
        for(j=1; j<=z; j++)
        {
            if(i==1||i==z||i==j)
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