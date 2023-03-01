// #include <stdio.h>
// #include <string.h>

 
// int main()
// {
   
//    // Take any two strings
//    char src[50] = "karera";
//    char dest[50]= "olivier";
  
//    // Appends 5 character from src to dest
//    strncat(dest, src, 5);
     
//    // Prints the string

//     printf("Concatenated String: %s\n", src);
//     printf("Concatenated String: %s\n", dest);
//    return 0;
// }
 

#include <stdio.h>
#include <string.h>

#define DEST_SIZE 40

int main()
{
	char src[] = "Hello karera";
	char dest[DEST_SIZE] = "olivier";

	strncat(dest, src, 3);
	printf(dest);

	return 0;
}