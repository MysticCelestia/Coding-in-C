#include <stdio.h>

int main(){
        int x,z=1;
        printf("Enter the number\n");
        scanf("%d",&x);

        for(int i = 1;i<=x;i++){
                z=z*i;
        }
        printf("factorial of %d is %d\n",x,z);
}

