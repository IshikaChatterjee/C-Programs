//instructions:
//you need to comment on each line what the code does
//you need to comment and write the logic
/*1. Write a program to input three numbers (positive or negative). 
If they are unequal then display the greatest number otherwise, display they are equal. 
The program also displays whether the numbers entered by the user are 
'All positive', 'All negative' or 'Mixed numbers'.
Sample Input: 56, -15, 12
Sample Output:
The greatest number is 56
Entered numbers are mixed numbers.
*/

#include<stdio.h>      //header file

int main()             //starts the program (main function)
{

        int a,b,c,greatestNumber;     //initializing three numers usig variables a,b and c
        printf("Enter first number: ");  // initialize the first number and take it as input 
        scanf("%d", &a);                

        
        printf("Enter second number: "); // initialize the second number and take it as input 
        scanf("%d", &b);
        
        printf("Enter third number: "); // initialize the third number and take it as input 
        scanf("%d", &c);

        greatestNumber = a; //for an assumption
        
        if ((a == b) && (b == c)) //this block checks if all numbers are equal
        {
            printf("Entered numbers are equal.");
        }
        else 
        {
            // b = 67 and a =14 = greatest number
            
            if (b > greatestNumber) 
            
            {
                greatestNumber = b;  //we are reinitializing or changing the value of greatest number with b
            }
            
            //c = -32
            //X not greater than greatest number which is 67
            if (c > greatestNumber) {
                greatestNumber = c;
            }
            
            printf("The greatest number is %d \n", greatestNumber);
            
            if ((a >= 0) && (b >= 0) && (c >= 0)) {
                printf("Entered numbers are all positive numbers.\n");
            }
            else if((a < 0) && (b < 0) && (c < 0)) {
                printf("Entered numbers are all negative numbers.\n");
            }
            else {
                printf("Entered numbers are mixed numbers.\n");
            }
        }
        return 0;
    }
