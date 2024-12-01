#include <stdio.h>

int main(){
	int time;
	float amount, rate,interest;
	printf("Enter the rate of interest\n");
	scanf("%f",&rate);
	printf("Enter the amount\n");
        scanf("%f",&amount);
	printf("Enter the time\n");
        scanf("%d",&time);
	
	interest = (amount*(rate/100)*time);
	printf("The interest for the amount of Rs.%0.2f is Rs. %0.2f\n",amount,interest);
	
}
