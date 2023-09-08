#include<stdio.h>
/* Takes Nothing,Returns Something
void main()
{
    int s;
    s=add();
    printf("Sum is %d",s);
    getch();
}

int add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    return(a+b);
} */

/* Takes Something,Returns Something */
int add(int,int);
void main()
{
    int s,x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("Sum is %d",s);
    getch();
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return (c);
}
