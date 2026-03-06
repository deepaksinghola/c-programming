#include<stdio.h>

int main()
{

    int x, y, temp;

    printf("Enter the value of x:");
    scanf("%d",&x);

    printf("Enter the value of y:");
    scanf("%d",&y);

    temp = x;
    
    x=y;

    y = temp;

    printf("\nThe value of x is %d, and the value of y is %d\n\n", x,y);

    return 0;


}