#include <stdio.h>
int main(){
	float f,c;
	printf("Enter temperature in celcius\n");
	scanf("%f",&c);
	f = (c*1.8)+32;
	printf("Temperature in Celcius is %3.1fC \n",c);
	printf("Temperature in Fahrenheit is %3.1fF \n",f);
}
