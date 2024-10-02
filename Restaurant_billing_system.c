#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Bill
{
    char name[50];
    int qty,rate,amount;
};
struct Bill b[5];
void main()
{
    int i,total=0;
    for(i=1;i<=5;i++)
    {
        fflush(stdin);
        printf("Enter Product name: ");
        gets(b[i].name);
        printf("Enter Quantity: ");
        scanf("%d",&b[i].qty);
        printf("Enter rate: ");
        scanf("%d",&b[i].rate);
        b[i].amount = b[i].qty * b[i].rate;
        total = total + b[i].amount;
    }
    printf("-------------------------------------------------MENU--------------------------------------------------------------");
    printf("\nPRODUCT\tRATE\tAMOUNT\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for(i=1;i<=5;i++)
    {
        puts(b[i].name);
        printf("\t%d\t",b[i].rate);
        printf("%d\n",b[i].amount);
    }
    printf("\n");
    printf("-------------------------------------------------------------------------------------------------------------------");
    printf("\n\tTotal Amount: %d\n",total);
    printf("-------------------------------------------------------------------------------------------------------------------");
    getch();
}