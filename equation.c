#include <stdio.h>
int main(){
	float u,t,f,s;
	printf("Enter distance 's'\n");
	scanf("%f",&s);
	printf("Enter velocity 'u'\n");
        scanf("%f",&u);
	printf("Enter time 't'\n");
        scanf("%f",&t);
	
	f = 2*((s-(u*t))/(t*t));
	printf("Value of small 'f' is %3.2f \n",f);
}
