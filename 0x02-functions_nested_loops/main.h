#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

static void print_alphabet(void){
        char alphabet;
        for(alphabet = 'a'; alphabet <= 'z'; alphabet++){
                _putchar(alphabet);
        }
        _putchar('\n');
}

