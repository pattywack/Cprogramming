#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	float number = 0, accumulator = 0, result = 0;
	char operator;
	bool end_flag = false;

	printf ("Please enter calculations:\n");
	
	while ( end_flag == false ) {
			printf ("= %f\n", accumulator);
			scanf ("%f %c\n", &number, &operator);
			switch (operator)
			{
				case 'S':
					accumulator = number;
					break;
				case '+':
					accumulator += number;
					break;
				case '-':
					accumulator -= number;
					break;
				case '*':
					accumulator *= number;
					break;
				case '/':
					accumulator /= number;
					break; 
				case 'E':
					end_flag = true;
					break;
				default:
					printf ("Unknown operator.\n");
					break;
			}
		 }

	return 0;
}
