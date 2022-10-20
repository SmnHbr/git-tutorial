#include <stdio.h>
#include "../lib/espl_lib.h"

int main(){
	int number_input,number_input_cont;
	char* ptr;
	number_input_cont  = 1;

	while (number_input_cont != 0){

		printf(	"This programm prints out the entered Number as a word. "
				"If you enter a number between 1 and 9, it will print the appropriate word. "
				"For numbers greater then 9, it will split up those number e.g.: 12 -> two one. "
				"Please note that numbers smaller then 1 are not supported!\n\n"
				"Please enter a Number: "
		);
		
		scanf("%i",&number_input);
		ptr = num_to_words(number_input);
		printf("\n >> ");

		while(*ptr != '\0'){
			printf("%c",*ptr);
			ptr++;
		}
		printf("\n\n\n");
		printf("Enter 0 to exit, or enter any other number to continue with a new Number!\n");
		scanf("%i",&number_input_cont);
	}
}

/*This programm prints out the entered number as a word. \n 
		If you enter a number between 0 and 9, it will print the appropriate word.\n
		For numbers greater then 9, it will split up those number e.g. 11 -> one one.\n
		Numbers smaller then 0 are not supported!
		Please enter a Number: */