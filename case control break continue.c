//-----------If else-------break continue-------

#include<stdio.h>

void main()
{
    /*
    int i,a=10;

    for(i=0;i<=10;i++)
    {
        if(i==5 || i==9)
        {
            continue;
        }
        printf("%d\n",i);

    }
    */

    /*
    int i,j,num;
    printf("Enter the count :");
    scanf("%d",&num);
    printf("\n");

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(j == num/2)
            {
                continue;
            }
            printf("%d ",j);
        }
        printf("\n");
    }
    */

    /*
    //Check whether the number is prime number
    int i,num;
    printf("Enter the count :");
    scanf("%d",&num);
    printf("\n");

    i=2;
    while(i<=num-1)
    {
        if(num%i == 0)
        {
            printf("The number is not prime number and is divisible  by %d ",i);
            break;
        }
        i++;
    }
    if(i == num)
    {
        printf("The number is Prime Number.");
    }
    */

    /*
    // print square matrix with "*" in diagonal
    int i,j,num=10;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(j == i)
            {
                printf(" *");
                continue;
            }
            printf(" %d",j);
        }
        printf("\n");
    }
    */

}
