#include<stdio.h>
 int main()
 {
     char s[100];
     int i = 0;

       s="karera";

     while( s[i] != '\0' ) 
     {
       
        if( s[i] >= 'a' && s[i] <= 'z' )
        {
           s[i] = s[i] - 32;
        }

        i++;
     }

     printf("In Upper Case is: "); 
     puts(s);

     return 0;
 }