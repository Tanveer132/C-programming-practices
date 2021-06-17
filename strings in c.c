//------Strings / character array in C------

#include<stdio.h>
#include<string.h>

int xstrlen(char *);
void xstrcpy(char *,char *);

void main()
{
    /*
    //Declaration of string
    char name[]="TANVEER";
    printf("%s\n",name);    //%s is notation to print string

    char name1[]={'S','H','I','K','A','L','G','A','R','\0'};
    printf("%s\n",name1);

    //traverse string element with known string size
    int i=0;
    while(i<=7)
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");

    //traverse string element with unknown string size
    int j=0;
    while(name1[j]!='\0')
    {
        printf("%c",name1[j]);
        j++;
    }
    printf("\n");

    //traverse with base address of the string
    char *ptr;
    ptr=&name[0]; //or ptr=name;

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    */

    /*
    //built in functions in <string.h>
    char name[10];
    char name1[10];

    printf("Enter the Name :");
    gets(name);
    puts("HELLO!");
    puts(name);
    */

    /*
    //------------strlen()

    char name[]="Measure Me";
    int len1,len2;
    len1=strlen(name);
    printf("length of string '%s' is = %d\n",name,len1);

    len2=xstrlen(name);
    printf("length of string '%s' without space is = %d",name,len2);
    */

    /*
    //-------strcpy()
    char name1[]="copy me";
    char name2[10];
    //strcpy(name2,name1);    //strcpy(distination,source)
    //printf("string name1 is copied to name2 as %s-%s\n",name1,name2);

    xstrcpy(name2,name1);
    printf("string name1 is copied to name2 as %s-%s\n",name2,name1);
    */

    /*
    //------strcat()
    char name1[]="Tanveer";
    char name2[]="Shikalgar";
    strcat(name1,name2);
    printf("%s\n",name1);
    */

    /*
    //------strcmp()
    char name1[]="Tanveer";
    char name2[]="Ranveer";
    int diff;
    diff=strcmp(name1,name2);
    printf("%d\n",diff);
    */

    return 0;
}

int xstrlen(char *c)
{
    int count=0;

    while(*c!='\0')
    {
        if(*c == ' ')
        {
            count--;
        }
        count++;
        c++;
    }
    return count;
}

void xstrcpy(char *dist,char *source)
{
    while(*source!='\0')
    {
        *dist=*source;
        *source++;
        *dist++;
    }
    *dist='\0';

}
