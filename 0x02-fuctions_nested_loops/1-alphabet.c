#include <stdio.h>

/*
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/*
  * print_alphabet - Prints the lowercase alphabet followed by a newline.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z'){
	{
		_putchar(letter);
		letter++;
	}
	
	_putchar('\n');
	}
	int main(){
	print_alphabet();
	return 0;
}
