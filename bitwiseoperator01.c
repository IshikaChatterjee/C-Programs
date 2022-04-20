#include <stdio.h>
int main() 
{
   unsigned int x = 48;	                                         /* 48 = 0011 0000 */  
   unsigned int y = 13;          	                             /* 13 = 0000 1101 */
   int z = 0; 
   int u = x;

   printf("the value of x = %d\n",u);         

   z =x & y;                                                     /* 0 = 0000 0000 */ 
   printf("Bitwise AND Operator - x & y = %d\n", z );

   z = x | y;                                                    /* 61 = 0011 1101 */
   printf("Bitwise OR Operator - x | y = %d\n", z );

   z= x^y;                                                       /* 61 = 0011 1101 */
   printf("Bitwise XOR Operator- x^y= %d\n", z);

   z = ~x;                                                       /*-49 = 11001111 */
   printf("Bitwise One's Complement Operator - ~x = %d\n", z);

   z = x << 2;                                                   /* 192 = 1100 0000 */
   printf("Bitwise Left Shift Operator x << 2= %d\n", z );

   z= x >> 2;                                                    /* 12 = 0000 1100 */
   printf ("Bitwise Right Shift Operator x >> 2= %d\n", z );

   return 0;
   }