#include<stdio.h>

int main()
{

    double a;

    printf("Enter an integer:");

    if(scanf("%lf",&a) !=1){        // Check if the input is a valid number
        printf("\nInvalid input!\n\n");
        return 1;
    }
    
    if( a != (int)a)                // Check if the input is an integer
    {
        printf("\nNot an integer!\n\n");
        return 1;
    }
    else{

        if((int)a%2==0){
            printf("\nThe number you entered is even!\n\n");
        }
        else{
            printf("\nThe number you entered is odd!\n\n");
        }
   
    }
    
    return 0;
}

