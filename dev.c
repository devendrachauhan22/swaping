#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    // c=a;
    // a=b;
    // b=c;
    a= a+b;
    b= a-b;
    a= a-b;
    printf("the value of a=%d and b=%d",a,b);
    return 0;
}

