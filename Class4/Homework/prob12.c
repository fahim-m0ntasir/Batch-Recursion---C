#include<stdio.h>
#include<string.h>
#include<math.h>
struct customer
{
    char id[10];
    char name[20];
    double unit;
};


int main()
{
    struct customer c1;
    strcpy(c1.id, "1001");
    strcpy(c1.name, "James");
    double bill_factor, total_bill,service_charge, net_payment;
    printf("How many units was consumed?\t-->\t");
    scanf("%lf", &c1.unit);


    if (c1.unit<=199)
    {
        bill_factor = 1.2;
    }
    else if (c1.unit >= 200 && c1.unit < 400)
    {
        bill_factor = 1.5;
    }
    else if (c1.unit >= 400 && c1.unit < 600)
    {
        bill_factor = 1.8;
    }
    else{
        bill_factor = 2.0;
    }
    
    total_bill = bill_factor*c1.unit;
    if (total_bill>=400)
    {
        service_charge = total_bill*.15;
    }
    else{
        service_charge = 0;
    }
    net_payment = total_bill+service_charge;
    if (net_payment < 100)
    {
        net_payment = 100;
    }
    
    printf("Customer ID\t\t\t\t:\t%s\n", c1.id);
    printf("Customer Name\t\t\t\t:\t%s\n", c1.name);
    printf("Unit Consumed\t\t\t\t:\t%lf\n", c1.unit);
    printf("Amount Charges @Tk. %lf per unit\t:\t%lf\n", bill_factor,c1.unit);
    printf("Service Charge(15)%c\t\t\t:\t%lf\n", '%', service_charge);
    printf("Net Amount Paid by the customer\t\t:\t%lf", net_payment);

    
    
    return 0;
}