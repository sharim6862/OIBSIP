// Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main()
{
    char str1[100], str2[100];
    int  i;	
       printf("Input the string : ");
       fgets(str1, sizeof str1, stdin);
	   
    
    i=0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("\nThe First string is : %s\n", str1);
    printf("copy of  string is : %s\n", str2);
}
