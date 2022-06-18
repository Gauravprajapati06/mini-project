#include <stdio.h>
int main()
{
    int days=0,mobileno;
    int temp,bikeno;
    float charge;
    char name[100];
    printf("Enter the name of the customer:");                      //to input the name of the customer
    scanf("%s",name);
    printf("Enter the phone number of the customer:");              // to input the mobile number of the customer
    scanf("%d", &mobileno);
    printf("Enter the registered number of the bike rented:");      // to input the bike's registeration number
    scanf("%d", &bikeno);
    printf("Enter the number of days the bike was for rent:");      // to input the number of days a bike was rented
    scanf ("%d", &days);
    printf("***************************************************\n");
    if (days<5)
    {
        charge = days*500;                                          // calculating rent for less than 5 days
    }
    else if (days<10)
    {
        temp=days-5;
        charge = temp*400+(5*500);                                  // calculating rent for less than 10 days
    }
    else
    {
       charge = (days-10)*200+(5*400)+(5*500);                      // calculating rent for greater then 10 days
    }
    printf("The amount to be paid by the customer is :%.3f \n",charge);    //displaying the total rent to be paid by the customer
    printf("***************************************************\n");
    printf("Thank You!!!\n");
    printf("Visit us again!!!");
    return 0;
}
