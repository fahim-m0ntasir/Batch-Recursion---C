#include <stdio.h>
int main()
{
    char id[6];
    char name[50];
    double unit;
    gets(id);
    gets(name);
    scanf("%lf", &unit);
    double rate, bill, sur_charge, net_bill;
    if (unit <= 200)
    {
        rate = 1.2;
    }
    else if (unit > 200 && unit <= 400)
    {
        rate = 1.5;
    }
    else if (unit > 400 && unit <= 600)
    {
        rate = 1.8;
    }
    else{
        rate = 2.00;
    }
    bill = rate * unit;
    sur_charge = (bill*0.15 > 100)? bill*0.15: 100;
    net_bill = bill + sur_charge ;
    printf("Customer Id no.\t:\t%s\n", id);
    printf("Customer Name\t:\t%s\n", name);
    printf("Units Consumed\t:\t%d\n", unit);
    printf("Amount Charges @Rs.%lf per unit\t:\t%lf\n", rate, bill);
    printf("Service Charge\t:\t%lf\n", sur_charge);
    printf("Net Amount Paid by Customer\t:\t%lf\n", net_bill);



    
    return 0;
}