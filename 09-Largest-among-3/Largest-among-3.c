#include<stdio.h>

int largest(int *inputs){


    int result = inputs[0];


    if (inputs[0]==inputs[1] && inputs[1]==inputs[2]) 
    {

        printf("\nAll numbers are equal!\n\n");
   
    }

   else {

        for(int i=1; i<3; i++)
        {
            if(inputs[i]>result){
                result = inputs[i];
            }

        }

        printf("\nThe largest number is %d\n\n",result);

   }
   

    return 0;
}


int main()
{

    int numbers[3];

    printf("Enter the first number:");
    scanf("%d",&numbers[0]);

    printf("Enter the second number:");
    scanf("%d",&numbers[1]);

    printf("Enter the third number:");
    scanf("%d",&numbers[2]);

    largest(numbers);
}
