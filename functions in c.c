//-----------Functions in C ----------

#include<stdio.h>

//user defined function must be declared before main function
int square_of_num(int x);
int fibonacci_of_num(int x);
int factorial_of_num(int x);


int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    int square,fibonacci,factorial;
    /*square=square_of_num(num);
    printf("Square of given number is :%d\n",square);*/

    //fibonacci=fibonacci_of_num(num);
    //printf("fibonacci number at %d is :%d\n",num,fibonacci);

    factorial=factorial_of_num(num);
    printf("factorial of given number is :%d\n",factorial);

    return 0;
}

//find the square of the given number
int square_of_num(int x)
{
    if(x>0)
    {
        return x*x;
    }else
    {
        printf("Wrong input \n");
        return 0;
    }
}


//Find the fibonacci number at given index
int fibonacci_of_num(int x)
{
    int a=0,b=1,c;
    for(int i=0;i<=x;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==x)
        {
        printf("%d is also a fibonacci number.\n",x);
        }
    }
    return c;
}

//factorial of the num
int factorial_of_num(int x)
{
    int fact;
    if(x==1)
    {
        return 1;
    }else
    {
        fact=x*factorial_of_num(x-1);
    }

    return fact;
}
