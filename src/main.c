#include <stdio.h>


int main(){
	int number_input,number_input_cont;
	char* ptr;
	number_input_cont  = 1;
	while (number_input_cont != 0){

		printf("Please enter a Number between 0 and 9 ");
		scanf("%i",&number_input);

		ptr = num_to_words(number_input);

		while(*ptr != '\0'){
		printf("%c",*ptr);
		ptr++;
		}
		printf("\n");
		printf("Press 0 to exit or press any other number to continue with a new Number!");
		scanf("%i",&number_input_cont);
	}
}