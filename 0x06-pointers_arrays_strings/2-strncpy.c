#include <stdio.h>
#include <string.h>
 
int main( )
{
   char source[ ] = "karera" ;
   char target[20]= "olivier" ;
   printf ( "\nsource string = %s", source ) ;
   printf ( "\ntarget string = %s", target ) ;
   strncpy ( target, source, 5 ) ;
   printf ( "\ntarget string after strcpy( ) = %s", target ) ;
   return 0;
}