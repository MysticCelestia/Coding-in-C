#include <stdio.h>

int main(){
	int inpYear;
	printf("Enter the year to be checked\n");
	scanf("%d",&inpYear);
	if(inpYear%4 == 0){
		printf("%d is a leap year \n",inpYear);
	}
	else{
		printf("%d is a not leap year \n",inpYear);
	}
}
