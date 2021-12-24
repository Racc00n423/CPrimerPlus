#include <stdio.h>
#include <stdlib.h>
void printgrid(char ch, unsigned int cols, unsigned int rows);

int main(void)
{
	char ch;
	unsigned int rows, cols;

	printf("Enter a character, number of rows and number of columns: ");
	while (scanf("%c %u %u", &ch, &rows, &cols) == 3)
	{
		printgrid(ch, cols, rows);
	}

	return 0;
}

void printgrid(char ch, unsigned int cols, unsigned int rows)
{
	// prints given character in a block sized rows x cols
	for (unsigned int i = 0; i < rows; i++)
	{
		for (unsigned int j = 0; j < cols; j++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
