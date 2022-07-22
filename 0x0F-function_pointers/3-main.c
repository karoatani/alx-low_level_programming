#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	
	if(argc != 4){
		printf("Error\n");
		exit(98);
	}
	// ./aa 1 + 1
	if(argv[2][1]){
		printf("Error\n");
		exit(99);
	}
	int (*operator)(int ,int);

	operator = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	int x = operator(num1,num2);

	printf("%d",x);

}