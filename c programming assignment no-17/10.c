//Write a program in C to Find the Frequency of Characters
 
 #include <stdio.h>
void main(){
   char str[1000],choice;
   int i,ctr=0;	   
	printf("Input the string : ");
    fgets(str,sizeof str,stdin);
	
   printf("Input the character to find frequency: ");
   scanf("%c",&choice);
   for(i=0;str[i]!='\0';++i)
   {
       if(choice==str[i])
           ++ctr;
   }
   printf("The frequency of '%c' is : %d\n\n", choice, ctr);
}