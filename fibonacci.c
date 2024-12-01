#include <stdio.h>

int main(){
	int n,n1 = 0,n2 = 1,c = 0;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Fibonacci series for %d is\n",n);
	for(int i = 1;i<=n;i++){
		if(i>2){
			c = n1 + n2;
			n2 = n1;
			n1 = c;
			printf("%d ",c);
		}
		if(i == 1){
			printf("%d ",c);
		}
	}
	printf("\n");
}
