// //program using functions to find out avg of three numbers

// #include<stdio.h>

// float average(int a, int b, int c);

// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a\n",a);
//     scanf("%d",&a);
//     printf("Enter the value of b\n",b);
//     scanf("%d",&b);
//     printf("Enter the value of c\n",a);
//     scanf("%d",&c);

    
//     printf("Average is %f\n", average(a,b,c));
    
// }

// float average(int a, int b, int c)
// {
//     float d;
//     d=(float)(a+b+c)/3;
//     return d;
    

// }

#include<stdio.h>

void change(int num)
{
    printf("before adding val inside fun num=%d\n", num);
    num=num+100;
    printf("After adding %d\n",num);

}

int main()
{
    int x=10;
    printf("Before x=%d\n",x);

    change(x);

    printf("After function call x=%d\n",x);
    return 0;
}