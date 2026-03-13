#include <stdio.h>

int multyply(int a,int b)
{
    return a*b;
}

int main()
{
    int a=10,b=20;
    int result=multyply(a,b);

    printf("Multiplication of %d and %d is %d\n",a,b,result);
    printf("Hello All");
}