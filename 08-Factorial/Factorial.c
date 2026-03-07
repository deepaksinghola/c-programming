#include<stdio.h>

long factorial(int x)
{

    long result=1;

    for(int i=x; i>0; i--)
    {
        result=result*i;
    }

    return result;
}


int main()
{

    int num;

    printf("Enter an integer:");
    scanf("%d",&num);

    printf("The factorial of %d is %ld\n", num, factorial(num));

    return 0;
}