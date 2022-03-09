#include<stdio.h>

int sum(int a, int b);


int main()
 {
    int x=4,y=7;
    printf("Value of x and y before function call is %d and  %d\n", x,y);
    printf("The value of 4+7 is %d\n", sum(x,y));
    printf("Value of x and y after function call is %d and %d", x,y);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c=a+b;

    a=1556;
    b=6232;
    return c;
}