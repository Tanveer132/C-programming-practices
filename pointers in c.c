//------------Pointers in C----------

#include<stdio.h>

int main()
{
    int a=10;
    int *ptr,**ptr1;            //*ptr --stores address of variable containing data,
    ptr=&a;                     //**ptr -- stores address of variable containing address
    ptr1=&ptr;

    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);
    printf("%d\n",*(*ptr1));


    return 0;
}
