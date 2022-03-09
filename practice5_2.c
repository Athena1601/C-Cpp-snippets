// // Celcius to Farhenheit

// #include <stdio.h>

// int convert(int);

// int main()
// {
//     int C;
//     printf("Enter the temp. in Celcius\n", C);
//     scanf("%d", &C);

//     printf("The %d degree celsius rto fahrenheit is %d\n", C, convert(C));
//     return 0;
// };
// int convert(int C)
// {
//     int F;
//     F = (C * 1.8) + 32;
//     return F;
// }


//Swap numbers using call by value

#include <stdio.h>

void swap(int, int);

int main()
{
    int x = 10, y = 20;

    printf("Before Swapping\na = %d\nb = %d\n", x, y);

    swap(x, y);
    printf("After Swapping\na = %d\nb = %d\n", x, y);

    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf("Values after swapping\na = %d\nb = %d\n", a, b);
}
