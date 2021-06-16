//----------Passing an entire array to the function---------

#include<stdio.h>

void display_1d(int *, int);
void display_2d(int *, int,int);


int main()
{
    int num[]={12,23,34,45,56};

/*
    //Array and pointer concept

    printf("%d\n",num[1]);
    printf("%d\n",&num[1]);
    printf("%u\n",&num[1]);

    //Following are same:
    //num[i]
    //*(num+i)
    //*(i+num)
    //i[num]

    printf("%d\n",num[1]);
    printf("%d\n",*(num+1));
    printf("%d\n",1[num]);

    //Passing array to function
    display_1d(&num[0],6);
    */

    /*
    //----Passing 2D array----
    int arr[4][2]={1,2,3,4,5,6,7,8};

    display_2d(arr,4,2);
    */
    return 0;
}

void display_1d(int *ptr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",*ptr);
        ptr++;     //increment pointer to next element
    }
}

void display_2d(int *ptr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*ptr);
            ptr++;     //increment pointer to next element
        }
        printf("\n");

    }
}
