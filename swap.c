#include<stdio.h>
main()
{
    int a=10;
    int b=20;
    printf("\nbefore swapping two number\n a:%d b:%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping two number\n a:%d b:%d",a,b);
    return 0;
}
