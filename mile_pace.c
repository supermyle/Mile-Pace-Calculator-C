/***************************
 * Program by Kyle Manley  *
 * 4/18/2020               *
 **************************/

#include <stdio.h>
#include <math.h>
	
int main()
{
	
	//Initialize variables
	double miles = 0.00;
	double minutes = 0.00;
	double pace = 0.00;
	double seconds = 0.00;
	double total = 0.00; 
	double minutesPerMile = 0.00; 
	double secondsPerMile = 0.00; 

	//Welcome text
	printf("******************\n");
	printf("* CALC MILE PACE *\n");
	printf("******************\n");
	
	//Prompt for user input
	printf("Enter how many miles you ran\n");
	scanf("%lf", &miles);
	printf("Enter how many minutes hit Enter and then do the same for seconds.\nMinutes -> ");
	scanf("%lf", &minutes);
	printf("Seconds -> ");	
	scanf("%lf", &seconds);

	//Math and Output
	total = (minutes*60)+seconds; //Total time in seconds
	pace = miles/total;
	minutesPerMile = floor(total / miles / 60);
	secondsPerMile = fmod(total/miles, 60.00);
	printf("You ran %0.0lf:%02.0lf pace\n", minutesPerMile, secondsPerMile);

	return 0;
}
