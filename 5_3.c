#include<stdio.h>

int add(int a, int b);// function prototype declaration

int add(int a, int b)//function definition- Formal arguments
{
  
    int result=a+b;
    printf("The addition is %d",result);

}

int main()
 {
    add(2,4);//function call- Actual arguments
    
    return 0;
}