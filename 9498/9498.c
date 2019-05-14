#include <stdio.h>

int main() {

	int input;

	scanf("%d",&input);

	if (input>=90 && input<=100) {
		printf("A\n");
	}
	else if (input>=80 && input<=89) {
		printf("B\n");
	}else if(input>=70 && input<=79){
		printf("C\n");
	}
	else if (input>=60 && input<=69) {
		printf("D\n");
	}else{
		printf("F\n");
	}
		
	return 0;
}
