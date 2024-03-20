/* NAME : LUKMAN NUR HAFIZ BIN RAMLI
   STUDENT NUMBER : 2020490962 */	

#include<stdio.h>

int main()
{
	float base=700, charge1=100, charge2=320, charge3=500, mile, total;	//declare variables
	
	printf("\t    ---------------------\n");
	printf("\t    | RENT A VAN RENTAL |\n");
	printf("\t    ---------------------\n");
	printf("\tOur Vans, Cheapest Amongst All\n\n");
	
	do																	//Repetition - do while loop
	{
		printf("Enter your mileage : ");								//Get input
		scanf("%f", &mile);
	
		if (mile>=0 && mile<=99)										//Selection - if...else if...else
			{
				total = base + charge1;									//Process
				printf("The total payment is RM%.2f", total);			//Display data
			}
		else if (mile>=100 && mile<=500)
			{
				total = base + charge2;									//Process
				printf("The total payment is RM%.2f", total);			//Display data
			}
		else if (mile>500)
			{
				total = base + charge3;									//Process
				printf("The total payment is RM%.2f", total);			//Display data
			}
		else
			printf("Please re-enter the correct value\n\n");			//Display data
			
	}while (mile<0);
	
	return 0;
}


