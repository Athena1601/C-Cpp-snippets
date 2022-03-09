// #include <stdio.h>

// int main()
// {
//     int side;
//     printf("Enter the value of side\n");
//     scanf("%d", &side);

//     printf("The area is %f", pow(side, 2));
//     return 0;
// }

#include<stdio.h>
int add();

int main()
 {
    add();
    return 0;
}

int add()
{
    int num1,num2,sum;
    num1=10,num2=20;
    sum=num1+num2;
    printf("%d", sum);
}