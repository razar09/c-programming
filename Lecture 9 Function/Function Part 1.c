main()
{
    add();
    isEven();
    add();
    add();
}

add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}

isEven()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if("a%2==0")
       printf("Even");
    else
       printf("Odd");
}
