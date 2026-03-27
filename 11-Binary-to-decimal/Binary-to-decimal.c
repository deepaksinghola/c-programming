#include<stdio.h>


int binarytodecimal(int n){

    int total = 0;
    int base = 1;

    while(n){

        int lastnum = n%10;
        n=n/10;
        
        total = total + lastnum*base;

        base = base*2;
    }
return total;

}


int main()
{

    int num;
    printf("Enter a binary number:");
    scanf("%d",&num);

    printf("\nDecimal: %d\n\n",binarytodecimal(num));

    return 0;

}