//---------Arrays in C---------

#include<stdio.h>

void display1(int);
void display2(int*);

int main()
{
    /*
    //array initialization while declaring
    int arr1[4]={1,2,3,4,5};
    printf("%d",sizeof(arr1));
    */

    /*
    //declare array and enter data and display data
    int arr2[5];

    for(int i=0;i<=5;i++)
    {
        printf("Enter element at arr2[%d]\n",i);
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<=5;i++)
    {
        printf("%d ",arr2[i]);
    }
    */

    /*
    //declare array and enter data and pass to function
    int arr3[5];

    for(int i=0;i<=5;i++)
    {
        printf("Enter element at arr3[%d]\n",i);
        scanf("%d",&arr3[i]);
    }

    for(int i=0;i<=5;i++)
    {
        display1(arr3[i]);
    }
    printf("\n");
    for(int i=0;i<=5;i++)
    {
        display2(&arr3[i]);
    }
    */


    /*
    //-------2D Array-------
    int arr4[4][2];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("\nEnter the position arr4[%d][%d] :",i,j);
            scanf("%d",&arr4[i][j]);
        }
    }

    //Display 2D array
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr4[i][j]);
        }
        printf("\n");
    }
    */


    return 0;
}

void display1(int x)
{
    printf("%d ",x);
}

void display2(int *x)
{
    printf("%d ",*x);
}
