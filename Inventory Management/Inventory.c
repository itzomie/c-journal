/*This program is coded by Omkar Sulakhe
The following program demonstrates the use of files in C
the program takes the asset number and asset name from user and stores it in the file */

#include<stdio.h>
FILE *p;
struct inventory{   // structure
    int asset_no;
    char name[10];
    float price;
};
int main()
{
    struct inventory i;
    char choice;
    int loop;
    p=fopen("Inventory.txt","w"); //opening a file in write mode
    if(p==NULL)       //if p doesnt exist
    {
        printf("FILE DOESNOT EXIST\n");
    }
    do
    {
        printf("Enter the asset number :");// enter the asset  number
        scanf("%d",&i.asset_no);
        fprintf(p,"Asset Number : %d\n",i.asset_no);// stores the asset number into the file
        printf("Enter the asset name :"); // enter the asset name
        getchar();
        scanf("%s",&i.name);
        fprintf(p,"Asset Name : %s\n",i.name);// prints the asset name in the file
        printf("Enter the asset price :");
        scanf("%f",&i.price);
        fprintf(p,"Asset Price : %.2f\n",i.price);
        printf("Do you want to add another asset :");
        getchar();
        scanf("%c",&choice);
        if(choice=='y'||choice=='Y') //check if user wants to add one more asset to the file
        {
            loop=1;
        }
        else
        {
            loop=0;
        }
    }while(loop);
    printf("*******Thank You********");
}
