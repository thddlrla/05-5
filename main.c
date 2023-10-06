#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	char op_type;
	
	printf("enter the calculation : ");
	scanf("%d %c %d",&num1, &op_type,&num2);
	
	if(op_type == '+'){
		printf("%d\n", num1 + num2);
	}
	
	return 0;
}
