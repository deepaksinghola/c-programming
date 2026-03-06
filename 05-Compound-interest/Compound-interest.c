#include<stdio.h>
#include<math.h>

int main()
{

    float p,r,t,ci,amount;

    printf("Enter the principle amount:");
    scanf("%f",&p);

    printf("Enter the rate:");
    scanf("%f",&r);

    printf("Enter the time period in years:");
    scanf("%f",&t);


    amount = p*pow((1+(r/100)),t);

    ci = amount - p;


    printf("\nCompound Interest = %0.2f\n\n", ci);



}