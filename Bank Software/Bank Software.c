/* this code is coded by Omkar Sulakhe.
the program performs the manupulation of money on the accounts.
input = account no. and the amount to be deposited or withdrawn.
output = the final balance details .*/
#include<stdio.h>

struct account     //decleration of structure
{
    long int accno;
    char name[20];
    char type;
    float bal;
}custmer[5]={{101,"Omie",'S',15000},        //array of structures
            {102,"Akshita",'S',18000},
            {103,"Ritesh",'S',14500},
            {104,"Aaron",'C',9070},
            {105,"Romeo",'C',2550}
};
int accin;
float amount;


void deposit()   // deposit function
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    custmer[accin].bal=custmer[accin].bal+amount;
    balance();
}

void withdraw()  // withdraw function
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    custmer[accin].bal=custmer[accin].bal-amount;
    balance();
}

void balance() // balance
{
    printf("Balance = %f\n",custmer[accin].bal);
}

int main()
{
    int accnum,i,ch;
    printf("Enter the Account number= ");
    scanf("%d",&accnum);
    accin=(accnum%100)-1; //arary starts from zero

    printf("Account number= %d\nName : %s\nAccount type=  %c\nBalance = %f\n",custmer[accin].accno,custmer[accin].name,custmer[accin].type,custmer[accin].bal);
      while(1)// infinite loop
    {
        printf("\nEnter your choice\n1 : Balance Inquiry\n2 : Deposit Amount \n3 : Withdraw Amount\n4 : Exit\n");
        scanf("%d",&ch);
        switch(ch)  // for choosing proper operation
        {
            case 1:balance();break;
            case 2:deposit();break;
            case 3:withdraw();break;
            case 4:exit(0); // comes out of infinite loop
            default:printf("Enter the correct choice");break;
        }
   }
}

