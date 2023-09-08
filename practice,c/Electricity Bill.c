#include<stdio.h>
void main()
{
    int units;
    float amt,total_amt,sur_charge;
    printf("Enter total units consumed : ");
    scanf("%d",&units);
    if(units<=300)
        amt=3*units;
    else if(units>=300)
        amt=3.5*units;
    sur_charge=amt*0.20;
    total_amt=amt + sur_charge;

    printf("Electricity Bill = Rs.%.2f ",total_amt);
    getch();

}
