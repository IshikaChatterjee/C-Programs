/*Write a program in C to calculate and print the Electricity bill of 
a given customer. The customer id., name and unit consumed 
by the user should be taken from the keyboard and display 
the total amount to pay to the customer. The charge are as follow :

Unit	                           Charge/unit
upto 199	                            @1.20
200 and above but less than 400     	@1.50
400 and above but less than 600     	@1.80
600 and above	                        @2.00

If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum 
bill should be of Rs. 100/- */


#include <stdio.h>
#include <string.h>  

int main()
{  
   int custid, CON;
   float chg, surchg=0, gramt,netamt;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",connm);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&CON);
   if (CON < 200 )
	chg = 1.20;
   else	if (CON >= 200 && CON < 400)
	chg = 1.50;
	else if (CON>=400 && CON<600)
	chg = 1.80;
	else
	chg = 2.00;

   gramt = CON*chg;
   if (gramt>300)
	surchg = gramt*15/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%s\n",connm);
   printf("unit Consumed                       :%d\n",CON);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);

    return 0;
}