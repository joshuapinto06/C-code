
#include <stdio.h>

int main()
{
    float num1,num2;
    int choice;
    char name[50];
    printf("Enter your first name bugger\n");
    scanf("%s",name);
    printf("Hello there %s!\n",name);
    printf("Enter the option bro\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    printf("Enter the two numbers upto two decimals man(hit enter after typing a number)\n");
    scanf("%f%f",&num1,&num2);
    
    switch(choice)
    {
        case 1:
        printf("The addition of %.2f and %.2f is %.2f",num1,num2,num1+num2);
        break;
        
        case 2:
        printf("The subtraction of %.2f and %.2f is %.2f",num1,num2,num1-num2);
        break;
        
        case 3:
        printf("The multiplication of %.2f and %.2f is %.2f",num1,num2,num1*num2);
        break;
        
        case 4:
        printf("The division of %.2f and %.2f is %.2f",num1,num2,num1/num2);
        break;
        
    }
}