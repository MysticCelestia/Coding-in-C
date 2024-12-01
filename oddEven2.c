#include <stdio.h>

int main(){
	int n,nMod;
	printf("Enter a number between 1 to 10\n");
	scanf("%d",&n);
	nMod = n%2;
	
	switch(nMod){
		case 0:
			printf("%d is even number\n",n);
			break;
		case 1:
			printf("%d is odd number\n",n);
			break;
	}
	return 0;
}
