#include <stdio.h>

int main(){
	int x,y,z=1;
	printf("Enter the base\n");
	scanf("%d",&x);
	printf("Enter the exponent\n");
	scanf("%d",&y);

	for(int i = 1;i<=y;i++){
		z=z*x;

	}
	printf("%d to the power of %d is %d\n",x,y,z);
}
