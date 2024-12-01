#include <stdio.h>

int main(){
	double pi = 3.1416;
	double lr,br,r;
	printf("Enter the length and breadth of a rectangle \n");
	scanf("%lf",&lr);
	scanf("%lf",&br);
	printf("Enter the radius of the circle \n");
	scanf("%lf",&r);
	printf("Perimeter of %.02lf x %.02lf rectangle is %.02lf \n",lr,br,(2*(lr+br)));
	printf("Area of %.02lf x %.02lf rectangle is %.02lf \n",lr,br,(lr*br));
	printf("Perimeter of circle of radius %.02lf is %.02lf \n",r,(2*pi*r));
	printf("Area of circle of radius %.02lf is %.02lf \n",r,(pi*r*r));
}

