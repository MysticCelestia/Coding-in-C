#include <stdio.h>

int main(){
	int n;
	 double z = 1;
	double sum = 0;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
        	for(int j = 1; j <= (i+1); j++){
                	z=z*j;
        	}
		sum = sum +((double)(i/z));
		z = 1;
	}
	printf("Sum for %d terms is: %lf\n",n,sum);
}
