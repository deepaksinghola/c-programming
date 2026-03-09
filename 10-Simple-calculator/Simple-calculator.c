#include<stdio.h>

int main()
{
    double num1, num2;
    int choice;

    printf("Enter the first number:");
    scanf("%lf",&num1);

    printf("Enter the second number:");
    scanf("%lf",&num2);

    printf("\nPress 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for division\n");
    printf("Press 4 for multiplication\n");

    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1: printf("\nThe sum of two numbers is %0.2lf\n\n",num1+num2);
            break;
        case 2: printf("\nThe difference of two numbers is %0.2lf\n\n",num1-num2);
            break;
        case 3: printf("\nThe division of two numbers is %0.2lf\n\n",num1/num2);
            break;
         case 4: printf("\nThe multiplication of two numbers is %0.2lf\n\n",num1*num2);
            break;
        default:  printf("\nWrong choice!\n\n");
        
    }

    return 0;

}