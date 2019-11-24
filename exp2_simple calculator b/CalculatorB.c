/* This program is coded by Omkars Sulakhe
the following program is the implementation of simple calculator which performs the basic operations like add,sub,mul,div.
the program uses functions to calculate and return the values calculated.*/

#include<stdio.h>
float add(float a,float b) // function definition for addition
{
    return(a+b);
}
float sub(float a,float b)// function definition for subtraction
{
    return(a-b);
}
float mul(float a,float b)// function definition for multiplication
{
    return(a*b);
}
float div(float a,float b)// function definition for division
{
    return((float)a/b);
}
void display(char choice,float a,float b,float ans)// function definition for display
{
    printf("%.3f %c %.3f is : %.2f",a,choice,b,ans);
}
int main()
{
    float a,b,ans;
    unsigned char choice;
    printf("Enter the value of a and b :");// entering values
    scanf("%f%f",&a,&b);
    pass :
    printf("Enter the operation to be performed on %.3f and %.3f :",a,b); //entering the option
    getchar();
    choice = getchar();
    switch(choice)// input the choice
    {
        case'+' :
            ans=add(a,b);
            break;
        case'-' :
            ans=sub(a,b);
            break;
        case'*' :
            ans=mul(a,b);
            break;
        case'/' :
            ans=div(a,b);
            break;
        default :
            printf("The choice entered is INCORRECT\nPlease enter the correct choice\n");
    }
    printf("The answer is : %.2f",ans);
    printf("\n");
    goto pass;
}

