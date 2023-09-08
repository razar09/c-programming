#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Value of x=");
    scanf("%d",&x);
    printf("Value of y=");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swaping");
    printf("\n Value of x=%d",x);
    printf("\n Value of y=%d",y);
    getch();
}
