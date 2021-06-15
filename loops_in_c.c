//---------loops in c-------
#include<stdio.h>

void main()
{
    //int a=10;
    //Understand the increment in the for loop
    /*
    for(int i=0;i<=10;i++){
        printf("%d\t",a+i);
    }
    printf("\n");
    for(int i=0;i<=10;++i){                     --------For Loop--------
        printf("%d\t",a+i);
    }
    printf("\n");
    for(int i=0;i<=10;++i){
        printf("%d\t",a+i);
        i++;
    }
    printf("\n");
    for(int i=0;i<=10;++i){
        printf("%d\t",a+i);
        ++i;
    }
    printf("\n");
    for(int i=0;i<=10;i++){
        printf("%d\t",a+i);
        i++;
    }
    printf("\n");
    for(int i=0;i<=10;i++){
        printf("%d\t",a+i);
        ++i;
    }
    */

    /*
    //sum of first n natural numbers
    int num,sum=0;
    printf("Enter the number : \n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum of n natural number is :%d",sum);
    */

    /*
    //series of fibonacci

    int num,a=0,b=1;
    int c;

    printf("Enter the count of fibonacci series :\n");
    scanf("%d",&num);
    printf("Fibonacci Series :\n0\n");
    for(int i=0;i<num;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;

    }
    */

    /*
    //series of fibonacci till given limit

    int num,a=0,b=1;
    int c;

    printf("Enter the count of fibonacci series :\n");
    scanf("%d",&num);
    printf("Fibonacci Series :\n0\n");
    for(int i=0;i<num;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        if (c==21)
        {
            break;
        }
    }
    */

    /*
    //Plot the diamond taking no. of stars in center line as input

    int num,i,j,k;
    printf("Enter the no. of stars in center line : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=1;i<=num-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=num-i;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    */

    /*
    //print 1 to 10 numbers using while loop
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);      //------------While Loop------------
        i++;
    }
    */

    /*
    int i=1;
    while(i++<=10)
    {
        printf("%d\n",i);
        i++;
    }
    //is similar to
    while(i++<=10)
    {
        printf("%d\n",i);
        ++i;
    }

    int j=1;
    while(++j<=10)
    {
        printf("%d\n",j);
        j++;
    }
    //is similar to
    while(++j<=10)
    {
        printf("%d\n",j);
        ++j;
    }
    */

    /*
    int i=10;

    do
    {
        printf("%d",i);
    }while(i<10);
    */


}
