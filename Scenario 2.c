/* NAME : LUKMAN NUR HAFIZ BIN RAMLI
   STUDENT NUMBER : 2020490962 */
   
#include<stdio.h>

int main()
{
	float year, CGPA, salary; 									//declare variables
	
	printf("\t-------------------------\n");
	printf("\t| SCHOLARSHIP QUALIFIER |\n");
	printf("\t-------------------------\n");
	printf("*To check if you're eligible for scholarship*\n\n");
	
	printf("Enter year of study : ");							//get input
	scanf("%f", &year);
	printf("Enter your CGPA : ");
	scanf("%f", &CGPA);
	printf("Enter your guardian's salary : ");
	scanf("%f", &salary);
	
	if ( year>1 && CGPA>3.0 && salary<1000)						//selection - if else
		printf("You are qualified for the scholarship");		//display data
	else 
		printf("You're not qualified for the scholarship");		//display data
	 
	return 0;
}
