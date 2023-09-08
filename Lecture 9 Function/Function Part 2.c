/* Takes Nothing,Returns Nothing
#include<stdio.h>
void main()
{
     void add(void);
     add();
     getch();
}
void add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
} */


/* Takes Something,Returns Nothing*/
#include<stdio.h>
void main()
{
     int x,y;
     void add(int,int);
     printf("Enter two numbers");
     scanf("%d%d",&x,&y);

     add(x,y); //Actual Arguments
     getch();
}
void add(int x,int y) //Formal Arguments
{
    int c;
    c=x+y;
    printf("Sum is %d",c);
}
