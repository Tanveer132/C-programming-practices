//-----Basic C program-----
#include<stdio.h>
//Pre processor- predefined function which performs certain operations
// like including header files, declaring consatants before compiling.

//main function is necessary for execution.
//without main function code can compile but cannot execute.
int main()
{
    // declare datatypes
    int num;
    float decimal;
    char c;

    //input from user
    printf("Enter the quantities : \n");
    scanf("%d %f %c",&num,&decimal,&c);

    //output
    printf("%d\n%f\n%c",num,decimal,c);

}
