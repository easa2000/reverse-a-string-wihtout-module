// program to reverse a string without using module

#include<stdio.h>
void main()
{
    int i=0,j=0,temp;
    char str[100];
    printf("\n Enter a string: ");
    gets(str);
    j = strlen(str) - 1;
    while(i<j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf("\n The reversed string is : ");
    puts(str);
}
