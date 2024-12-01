#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2;
	printf("Enter a,b,c where they are in the form of a quadratic equation \n");
	scanf("%f",&a);	
	scanf("%f",&b);
	scanf("%f",&c);
	
	x1 = (-b + sqrt((b*b)-4*a*c))/(2*a);  
	x2 = (-b - sqrt((b*b)-4*a*c))/(2*a);


	printf("Roots of the Quadratic equation %0.1f x^2 + %0.1f x + %0.1f is %0.02f and %0.02f \n",a,b,c,x1,x2);
}
