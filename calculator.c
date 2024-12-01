#include <stdio.h>

int main(){
	int a,b,n;
	char c = 'y';
	while(c == 'y' || c == 'Y'){
		printf("Enter 2 integers\n");
	        scanf("%d",&a);
		scanf("%d",&b);

		printf("Enter 1 for addition,2 for subtraction,3 for multiplication and 4 for division\n");
        scanf("%d",&n);
		switch(n){
                case 1:
			printf("Sum of %d and %d is %d\n",a,b,(a+b));
			break;
		case 2:
                        printf("Difference between %d and %d is %d\n",a,b,(a-b));
                        break;
		case 3:
                        printf("Product of %d and %d is %d\n",a,b,(a*b));
                        break;
		case 4:
                        printf("Qoutient of %d and %d is %d\n",a,b,(a/b));
                        break;
		default:
			printf("Wrong choice\n");

         	}
	printf("Press y to continue or any key to exit\n");
	scanf(" %c",&c);

	}
	return 0;
}
