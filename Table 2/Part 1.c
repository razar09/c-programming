#include<stdio.h>

int main()

{
    int n;
    printf("Enter any number : \n");
    scanf("%d", &n);
    for(int i=10;i>=1;i-=2)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
