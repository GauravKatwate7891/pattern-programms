///////////////////////////////////////
///////////left lower trangle/////////
/////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,x=0;
    char ch='A';

    printf("\n enter the count of row and colum=>");
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {
        ch='A';
        for(j=1; j<=x; j++,ch++)
        {
            if( i+j<=x+1)
            {
                printf(" %c ",ch);
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
